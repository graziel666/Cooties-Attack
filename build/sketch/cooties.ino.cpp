#include <Arduino.h>
#line 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
#include "general.h"


#line 4 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
void setup();
#line 20 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
void loop();
#line 4 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
void setup()
{

    arduboy.begin();
    arduboy.setFrameRate(60);
    arduboy.clear();
    arduboy.display();

    initBullets();

    /*cootie.x=120;
    cootie.y=30;*/
    
    
}

void loop()
{   
    if (!(arduboy.nextFrame())) return;
    arduboy.clear();

    

    input();

    animEnemy();
    
    moveBullets();
    
    drawBullets();

    if (waitCount != 0) {
      --waitCount;
    }

    if (hero.iframe !=0){
      --hero.iframe;
    }

    //draw
    sprite.drawPlusMask(hero.x,hero.y,hero_sp, hero.frame);

    //test
    //arduboy.drawRect(targetX, targetY, targetWidth+5, targetHeight+5);

    for (uint8_t i = 0; i < 10; i++){
      sprite.drawPlusMask(cootie[i].x,cootie[i].y,cootie_sp, cootie[i].frame);
    };
    checkBullets();

    //just test
    arduboy.setCursor(0, 0);
    arduboy.print(hitCount);
    arduboy.setCursor(0, 8);
    arduboy.print(enemyHit);
    arduboy.setCursor(0, 16);
    arduboy.print(hero.iframe);

    arduboy.display();
}
