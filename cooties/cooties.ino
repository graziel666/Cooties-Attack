#include <Arduboy2.h>
#include "sprites.h"

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

    if (arduboy.pressed(UP_BUTTON) or arduboy.pressed(DOWN_BUTTON)
        or arduboy.pressed(LEFT_BUTTON)or arduboy.pressed(RIGHT_BUTTON)){
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

    if (arduboy.pressed(UP_BUTTON)){
        if (hero.y>=5){
            hero.y--;
            facingUp = true;
        };
    }
    if (arduboy.pressed(DOWN_BUTTON)){
        if (hero.y<=55){
            hero.y++;
            facingUp = false;
        };
    }
    if (arduboy.pressed(LEFT_BUTTON)){
        if (hero.x>=3){
            hero.x--;
        };
    }
    if (arduboy.pressed(RIGHT_BUTTON)){
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