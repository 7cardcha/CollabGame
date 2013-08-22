/*
Keeps track of a camera x and y coordinate, allows you to lock it to the player,

and provides an easy way to draw bitmaps with the camera, you can of course just

get the x and y and use them to draw if you want to draw primitives.

Definitely needs some refinement, for ease of use, just stubbing it.
*/


#include "camera.hpp"

//Constructor for setting the camera coords.
Camera::Camera(int centerX, int centerY)
{
    //Center the player, or whatever we are tracking.
    Camera::cameraX = centerX - SCREEN_WIDTH / 2;
    Camera::cameraY = centerY - SCREEN_WIDTH / 2;
}

//Update function so you can follow the player or scroll somewhere else.
void Camera::update(int centerX, int centerY)
{
    //Again center.
    cameraX = centerX - SCREEN_WIDTH / 2;
    cameraY = centerY - SCREEN_HEIGHT / 2;
}

//For ease of drawing with the camera.
void Camera::drawBitmap(ALLEGRO_BITMAP *bitmap, int x, int y)
{
    //Offsets by the camera, in a 10000x10000 map, for an object at 9000,9000, with the camera at 9000x9000, would render at 0,0
    al_draw_bitmap(bitmap, x - cameraX, y - cameraY, 0);
}

//Simple get and set functions
int Camera::getX(){return cameraX;}
int Camera::getY(){return cameraY;}
