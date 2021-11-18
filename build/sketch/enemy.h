#line 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\enemy.h"
#pragma once
#include "general.h"

const int16_t xStart[48] = {  0,  8, 16, 24, 32, 40, 48, 56, 64, 72,  // Top 
                             80, 88, 96, 104, 112, 120, 128,          // Top 
                             130, 130, 130, 130, 130, 130, 130,       // RHS
                             128, 120, 112, 104, 96, 88, 80, 72,      // Bot
                             64, 56, 48, 40, 32, 24, 16, 8, 0,        // Bot
                             -8, -8, -8, -8, -8, -8, -8 };            // LHS

const int16_t yStart[48] = { -8, -8, -8, -8, -8, -8, -8, -8, -8, -8,  // Top 
                             -8, -8, -8,  -8,  -8,  -8,  -8,          // Top 
                              8, 16, 24, 32, 40, 48, 56,              // RHS
                             64, 64, 64, 64, 64, 64, 64, 64, 64,      // Bot
                             64, 64, 64, 64, 64, 64, 64, 64,          // Bot
                             56, 48, 40, 32, 24, 16, 8 };             // LHS


void drawCooties(){
    for (uint8_t i = 0; i < 10; i++) {
        if (!cootie[i].enable) {
            uint8_t pos = random(0, 48);
            cootie[i].enable = true;  
            cootie[i].x = xStart[pos]; 
            cootie[i].y = yStart[pos]; 
            break;
        }
    }
    
    for (uint8_t i = 0; i < 10; i++){
      sprite.drawPlusMask(cootie[i].x,cootie[i].y,cootie_sp, cootie[i].frame);
    }
    
}

void moveEnemy(){


  for (uint8_t i = 0; i < 10; i++){
    if(arduboy.everyXFrames(10)){
    
            if (cootie[i].x<hero.x){
                cootie[i].x++;
            }else{ cootie[i].x--;}

            if (cootie[i].y<hero.y){
                cootie[i].y++;
            }else{ cootie[i].y--;}
    
    }
  }
}