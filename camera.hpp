#pragma once

//Has globals, such as screen width/height. Not too relevant.
#include "globals.h"
#include <allegro5/allegro5.h>


/*
Keeps track of a camera x and y coordinate, allows you to lock it to the player,

and provides an easy way to draw bitmaps with the camera, you can of course just

get the x and y and use them to draw if you want to draw primitives.

Definitely needs some refinement, for ease of use, just stubbing it.
*/

class Camera
{
    private:

    protected:
        //Camera positon coordinates.
        int cameraX;
        int cameraY;

    public:
        //Constructor for setting the camera coords.
        Camera(int centerX, int centerY);

        //Update function so you can follow the player or scroll somewhere else.
        void update(int centerX, int centerY);

        //For ease of drawing with the camera.
        void drawBitmap(ALLEGRO_BITMAP *bitmap, int x, int y);

        //Simple get and set functions
        int getX();
        int getY();
};
