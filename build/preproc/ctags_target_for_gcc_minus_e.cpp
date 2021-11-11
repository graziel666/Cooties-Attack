# 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
# 2 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 2
# 3 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 2

Arduboy2 arduboy;
Sprites sprite;

 bool facingUp;


struct Characters
{
    uint8_t w=8;
    uint8_t h=8;
    uint8_t x=64;
    uint8_t y=32;

    uint8_t speed = 2;
    uint8_t frame = 0;

    void move(uint8_t xa, uint8_t ya){
        x += xa * speed;
        y += ya * speed;
    };
};

 Characters hero;


//set sprite direction and animation
void anim(){
    /*if (hero.y >= 33){

        hero.frame = 0;

    }else{

        hero.frame = 2;

    };*/
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
    if (arduboy.pressed(
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       (1 << (
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       7
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       )) 
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       /**< The Up button value for functions requiring a bitmask */) or arduboy.pressed(
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                                                     (1 << (
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                                                     4
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                                                     )) 
# 37 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                                                     /**< The Down button value for functions requiring a bitmask */)
        or arduboy.pressed(
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                          (1 << (
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                          5
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                          )) 
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                          /**< The Left button value for functions requiring a bitmask */)or arduboy.pressed(
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                                                         (1 << (
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                                                         6
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                                                         )) 
# 38 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                                                         /**< The Right button value for functions requiring a bitmask */)){
            if(arduboy.everyXFrames(5)){
                hero.frame++;
            };

            if (!facingUp && hero.frame>=2){
                hero.frame=0;
            };
            if (facingUp && hero.frame>=4){
                hero.frame=2;
            };
        }

}
//controls
void input(){

    anim();

    arduboy.pollButtons();

    if (arduboy.pressed(
# 59 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       (1 << (
# 59 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       7
# 59 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       )) 
# 59 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       /**< The Up button value for functions requiring a bitmask */)){
        if (hero.y>=5){
            hero.y--;
            facingUp = true;
        };
    }
    if (arduboy.pressed(
# 65 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       (1 << (
# 65 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       4
# 65 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       )) 
# 65 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       /**< The Down button value for functions requiring a bitmask */)){
        if (hero.y<=55){
            hero.y++;
            facingUp = false;
        };
    }
    if (arduboy.pressed(
# 71 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       (1 << (
# 71 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       5
# 71 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       )) 
# 71 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       /**< The Left button value for functions requiring a bitmask */)){
        if (hero.x>=3){
            hero.x--;
        };
    }
    if (arduboy.pressed(
# 76 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       (1 << (
# 76 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       6
# 76 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino" 3
                       )) 
# 76 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\cooties.ino"
                       /**< The Right button value for functions requiring a bitmask */)){
        if (hero.x<=119){
            hero.x++;
        };
    }
}

void setup()
{

    arduboy.begin();
    arduboy.setFrameRate(60);
    arduboy.clear();
    arduboy.display();
}

void loop()
{
    if (!(arduboy.nextFrame())) return;
    arduboy.clear();
    input();


    //draw
    sprite.drawPlusMask(hero.x,hero.y,hero_sp, hero.frame);

    //just test
    arduboy.setCursor(0, 0);
    arduboy.print(hero.x);
    arduboy.setCursor(0, 8);
    arduboy.print(hero.y);

    arduboy.display();
}
