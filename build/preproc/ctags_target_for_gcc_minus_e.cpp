# 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
# 2 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 2


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

    animEnemy();

    moveBullets();

    drawBullets();

    if (waitCount != 0) {
      --waitCount;
    }

    if (hero.iframe !=0){
      --hero.iframe;
    }

    targetX = cootie.x;
    targetY = cootie.y;
    //draw
    sprite.drawPlusMask(hero.x,hero.y,hero_sp, hero.frame);

    //test
    //arduboy.drawRect(targetX, targetY, targetWidth+5, targetHeight+5);
    sprite.drawPlusMask(cootie.x,cootie.y,cootie_sp, cootie.frame);

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
