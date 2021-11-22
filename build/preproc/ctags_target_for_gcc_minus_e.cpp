# 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
# 2 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 2


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
    font3x5.setCursor(0, 0);
    font3x5.print("Points: ");
    font3x5.setCursor(9*3, 0);
    font3x5.print(hitCount);
    //life
    font3x5.setCursor(0, 6);
    font3x5.print("Life: ");
    font3x5.setCursor(7*3, 6);
    font3x5.print(hero.life);
    //level
    font3x5.setCursor(0, 12);
    font3x5.print("Level: ");
    font3x5.setCursor(8*3, 12);
    font3x5.print(level);
    //arduboy.print(cootie->collide);

    arduboy.display();
}
