# 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\Github\\Cooties-Attack\\cooties\\cooties.ino"
# 2 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\Github\\Cooties-Attack\\cooties\\cooties.ino" 2


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

    setLife();

    if (waitCount != 0) {
      --waitCount;
    }

    if (hero.iframe !=0){
      --hero.iframe;
    }

    //draw
    //hero
    sprite.drawPlusMask(hero.x,hero.y,hero_sp, hero.frame);

    //life
    sprite.drawPlusMask(arduboy.width()-28,0,hearts_sp, hearts_frame);
    arduboy.fillRect(arduboy.width()-28,0,hide_w,8,2);
    //test
    //arduboy.drawRect(targetX, targetY, targetWidth+5, targetHeight+5);



    checkCollisions();
    //enemyHealth();

    //just test

    //points
    font3x5.setCursor(0, 0);
    font3x5.print("Points: ");
    //font3x5.setCursor(128-3*12, 0);
    //font3x5.print("Points: ");
    //font3x5.setCursor(128-8, 0);
    //font3x5.print(hitCount);
    font3x5.setCursor(3*10, 0);
    font3x5.print(hitCount);
    //life
    //font3x5.setCursor(0, 6);
    //font3x5.print("Life: ");
    //font3x5.setCursor(7*3, 6);
    //font3x5.print(hero.life);
    //level
    font3x5.setCursor((arduboy.width()/2)-6, 0);
    font3x5.print("Level: ");
    font3x5.setCursor(((arduboy.width()/2)-6)+8*3, 0);
    font3x5.print(level);

    arduboy.display();
}
