#line 1 "c:\\Users\\diego\\OneDrive\\Escritorio\\arduboy\\cooties\\structures.h"
#pragma once

#include "general.h"


enum class Direction : uint8_t
{
	Up, Right, Down, Left
};

struct Bullet:Rect
{
	Direction direction;
};



constexpr uint8_t bulletSize = 3; // Size of a square bullet
constexpr uint8_t bullets = 5;    // Maximum number of bullets
constexpr uint8_t bulletWait = 10; // Minimum frames between firing
constexpr int bulletOff = -1;     // "Bullet not in use" value;



// For counting the minimum number of frames between bullets
uint8_t waitCount = 0;

Bullet bullet[bullets];

/*struct  Bullets
{
    Direction direction;
};
Bullets test;*/

//enemies
// Target definitions
constexpr uint8_t targetWidth = 8;
constexpr uint8_t targetHeight = 8;
 uint8_t targetX = 120;
 uint8_t targetY = 30;



struct Characters
{   
    uint8_t w=8;
    uint8_t h=8;
    uint8_t x=64;
    uint8_t y=32;

    uint8_t iframe=50;

    Direction direction;

    uint8_t speed = 2;
    uint8_t frame = 0;

    void move(uint8_t xa, uint8_t ya){
        x += xa * speed;
        y += ya * speed;
    };
};