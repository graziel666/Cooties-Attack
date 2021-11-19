#include "general.h"


void setup()
{

    arduboy.begin();
    arduboy.setFrameRate(60);
    arduboy.clear();
    arduboy.display();

    initBullets();
    initEnemies();

    hero.x=64;
    hero.y=32;
    hero.width=8;
    hero.height=8;

    hitCount=0;

    level = 1;
    
    
}

void loop()
{   
    if (!(arduboy.nextFrame())) return;
    arduboy.clear();

    

    input();

    drawCooties();
    moveEnemy();
    
    
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

    

    checkCollisions();
    //enemyHealth();

    //just test

    //points
    arduboy.setCursor(0, 0);
    arduboy.print("points: ");
    arduboy.setCursor(8*6, 0);
    arduboy.print(hitCount);
    //life
    arduboy.setCursor(0, 8);
    arduboy.print("Life: ");
    arduboy.setCursor(8*6, 8);
    arduboy.print(hero.life);
    //level
    arduboy.setCursor(0, 16);
    arduboy.print("level");
    arduboy.setCursor(8*6, 16);
    arduboy.print(level);
    //arduboy.print(cootie->collide);

    arduboy.display();
}