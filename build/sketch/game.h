#line 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\game.h"
#pragma once
#include "general.h"

Arduboy2 arduboy;
Sprites sprite;


uint8_t level=0;

 
 //Bullets bullet; 


bool facingUp;
 
uint16_t hitCount = 0;
uint16_t enemyHit = 0;

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

    for (uint8_t i = 0; i < 10; i++){
      if(arduboy.everyXFrames(8)){
              cootie[i].frame++;
          };
      if (cootie[i].frame >=2){
          cootie[i].frame=0;
      };
    }
}
//controls
void input(){

    anim();

    arduboy.pollButtons();


    if (arduboy.pressed(UP_BUTTON)){
        if (hero.y>0){
            hero.y--;
            hero.direction = Direction::Up;
            facingUp =  true;
        };
    }
    if (arduboy.pressed(DOWN_BUTTON)){
        if (hero.y<arduboy.height()-heroHeight){
            hero.y++;
            hero.direction = Direction::Down;
            facingUp = false;
        };
    }
    if (arduboy.pressed(LEFT_BUTTON)){
        if (hero.x>0){
            hero.x--;
            hero.direction = Direction::Left;
        };
    }
    if (arduboy.pressed(RIGHT_BUTTON)){
        if (hero.x<arduboy.width()-heroWidth){
            hero.x++;
            hero.direction = Direction::Right;
        };
    }

    if (arduboy.pressed(A_BUTTON)) {
    if (waitCount == 0) {
      
      uint8_t bulletNum = findUnusedBullet();
      if (bulletNum != bullets) { // If we get an unused bullet
        // Set the start position. (A positive X indicates bullet in use)

        //bullet[bulletNum].direction = hero.direction; //uncomment this to fix the bug


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
void initEnemies(){
      // Init all the enemies
  for (uint8_t i = 0; i < targets; ++i) {
    cootie[i].width = 9;
    cootie[i].height = 9;
    cootie[i].enable = false;
    
  }
}



void moveBullets()
{
	for (uint8_t bulletNum = 0; bulletNum < bullets; ++bulletNum)
	{
    //this is the bug
    bullet[bulletNum].direction = hero.direction;
		// If bullet in use
		if (bullet[bulletNum].x != bulletOff)
		{
			if(bullet[bulletNum].direction == Direction::Right)
			{
				// move bullet right
				++bullet[bulletNum].x;
			}
			
			if(bullet[bulletNum].direction == Direction::Left)
			{
				// move bullet left
				--bullet[bulletNum].x;
			}
			
			if(bullet[bulletNum].direction == Direction::Up)
			{
				// move bullet up
				--bullet[bulletNum].y;
			}
			
			if(bullet[bulletNum].direction == Direction::Down)
			{
				// move bullet down
				++bullet[bulletNum].y;
			}
			
			// If off screen
			if (bullet[bulletNum].x >= arduboy.width() || (bullet[bulletNum].x == 0)
			|| bullet[bulletNum].y >= arduboy.height() || (bullet[bulletNum].y == 0))
			{ 
				// Set bullet as unused
				bullet[bulletNum].x = bulletOff;
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

void setLevel(){
  if (level ==5 && targets < maxTargets) {
    ++targets;
  }
  if (level ==10 && targets < maxTargets) {
    ++targets;
  }
  /*if (level ==15 && targets < maxTargets) {
    ++targets;
  }
  if (level ==20 && targets < maxTargets) {
    ++targets;
  }*/
}

void checkCollisions() {
  for (uint8_t i = 0; i < targets; i++){

    if (cootie[i].life<=0){
          setLevel();
          cootie[i].enable=false;
          
          if (maxLife<6){
            ++maxLife;
          }
          
          ++level;
          
          
          cootie[i].life =maxLife;
        }


  //check if enemy touch the hero
    if (arduboy.collide(cootie[i],hero)&& hero.iframe==0){
      ++enemyHit;
      hero.iframe=50;
      if (hero.life>0){
        --hero.life;
        if (hitCount>10){
          hitCount = hitCount-10;
        }
      }
        
    }
  

    

  //check if bullet hit the enemy
    for (uint8_t bulletNum = 0; bulletNum < bullets; ++bulletNum) {
      if (hero.iframe==0 && arduboy.collide(bullet[bulletNum], cootie[i])) {
        ++hitCount;
        --cootie[i].life;
        bullet[bulletNum].x = bulletOff;  // Set bullet as unused

        
        

      }
    }
  } //test

}




