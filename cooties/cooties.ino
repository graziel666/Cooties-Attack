#include "general.h"


void setup()
{

    arduboy.begin();
    arduboy.setFrameRate(60);
    arduboy.clear();
    arduboy.display();

    initBullets();

    cootie.x=120;
    cootie.y=30;
    
    
}

void loop()
{   
    if (!(arduboy.nextFrame())) return;
    arduboy.clear();

    

    input();
    
    moveBullets();
    
    drawBullets();

      if (waitCount != 0) {
    --waitCount;
  }

    
    //draw
    sprite.drawPlusMask(hero.x,hero.y,hero_sp, hero.frame);

    //test
    arduboy.drawRect(target.x, target.y, targetWidth, targetHeight);
    sprite.drawPlusMask(cootie.x,cootie.y,cootie_sp, cootie.frame);

    //checkBullets();


    
    //just test
    arduboy.setCursor(0, 0);
    arduboy.print(hero.x);
    arduboy.setCursor(0, 8);
    arduboy.print(hero.y);
    arduboy.setCursor(0, 16);
    arduboy.print(hitCount);

    arduboy.display();
}