#line 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\game.h"
#pragma once
#include "general.h"

Arduboy2 arduboy;
Sprites sprite;

 bool facingUp;
 bool facingDown;
 bool facingLeft;
 bool facingRight;


 Characters hero;
 Characters cootie;
 //Bullets bullet; 
 
uint16_t hitCount = 0;

uint8_t findUnusedBullet() {
  uint8_t bulletNum;
  for (bulletNum = 0; bulletNum < bullets; ++bulletNum) {
    if (bullet[bulletNum].x == bulletOff) {
      break; // unused bullet found
    }
  }
  return bulletNum;
}



//set sprite direction and animation
void anim(){

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

    if(arduboy.everyXFrames(5)){
            cootie.frame++;
        };
    if (cootie.frame >=2){
        cootie.frame=0;
    };

}
//controls
void input(){

    anim();

    arduboy.pollButtons();


    if (arduboy.pressed(UP_BUTTON)){
        if (hero.y>0){
            hero.y--;
            facingUp = true;
            facingDown = false;
            facingLeft = false;
            facingRight= false;
        };
    }
    if (arduboy.pressed(DOWN_BUTTON)){
        if (hero.y<arduboy.height()-hero.h){
            hero.y++;
            facingUp = false;
            facingDown = true;
            facingLeft = false;
            facingRight= false;
        };
    }
    if (arduboy.pressed(LEFT_BUTTON)){
        if (hero.x>0){
            hero.x--;
            facingUp = false;
            facingDown = false;
            facingLeft = true;
            facingRight= false;
        };
    }
    if (arduboy.pressed(RIGHT_BUTTON)){
        if (hero.x<arduboy.width()-hero.w){
            hero.x++;
            facingUp = false;
            facingDown = false;
            facingLeft = false;
            facingRight= true;
        };
    }

    if (arduboy.pressed(A_BUTTON)) {
    if (waitCount == 0) {
      uint8_t bulletNum = findUnusedBullet();
      if (bulletNum != bullets) { // If we get an unused bullet
        // Set the start position. (A positive X indicates bullet in use)
        bullet[bulletNum].x = hero.x;
        bullet[bulletNum].y = hero.y + 3; // Part way down the player
        waitCount = bulletWait; // Start the delay counter for the next bullet
      }
    }
  }
}

void initBullets(){
      // Init all the bullets
  for (uint8_t bulletNum = 0; bulletNum < bullets; ++bulletNum) {
    bullet[bulletNum].x = bulletOff;
    bullet[bulletNum].width = bulletSize;
    bullet[bulletNum].height = bulletSize;
    
  }
}



void moveBullets() {
  for (uint8_t bulletNum = 0; bulletNum < bullets; ++bulletNum) {
      
    if (bullet[bulletNum].x != bulletOff) { // If bullet in use
      
    if (facingRight){
        ++bullet[bulletNum].x; // move bullet right
      }
      if (facingLeft){
        --bullet[bulletNum].x; // move bullet left
      }
    }
    
    if (bullet[bulletNum].y != bulletOff) {
      if (facingDown){
        ++bullet[bulletNum].y; // move bullet down
      }
      if (facingUp){
        --bullet[bulletNum].y; // move bullet up
      }

      if (bullet[bulletNum].x >= arduboy.width() or (bullet[bulletNum].x == 0)
          or bullet[bulletNum].y >= arduboy.height() or (bullet[bulletNum].y == 0)) { // If off screen
        bullet[bulletNum].x = bulletOff;  // Set bullet as unused
      }
    }
  }
}


// Draw all the active bullets
void drawBullets() {
  for (uint8_t bulletNum = 0; bulletNum < bullets; ++bulletNum) {
    if (bullet[bulletNum].x != bulletOff) { // If bullet in use
      arduboy.fillRect(bullet[bulletNum].x, bullet[bulletNum].y, 
                       bulletSize, bulletSize);
    }
  }
}

void checkBullets() {
  for (uint8_t bulletNum = 0; bulletNum < bullets; ++bulletNum) {
    if (arduboy.collide(bullet[bulletNum], target)) {
      ++hitCount;
      bullet[bulletNum].x = bulletOff;  // Set bullet as unused
    }
  }
}