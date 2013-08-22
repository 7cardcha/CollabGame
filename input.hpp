#pragma once

#include <allegro5/allegro5.h>
#include <string>
#include <iostream>

using namespace std;

/*
Intended to make input more abstract,

handles key input and hooks into the

event loop. Definitely not done,

definitely needs more polish.
*/

//TODO, Add some modifier get function.

//TODO, add mouse handling.

//NOWHERE NEAR DONE, just pushing so you can get an idea of how it works.


class Input
{
    private:

    protected:
        //Boolean arrays for keeping track of which keys were pressed/held down.
        bool key[128];
        bool prev_key[128];

        //Boolean array for keyboard modifers.
        bool mod[32];

        //String to keep track of the recorded input.
        string recordedInput;

        bool recording;


    public:
        //Constructor to initalize variables and arrays.
        Input();

        //Enum for all the keys, public so it can be used easily as key codes.
        enum KEYS
        {
            KEY_CAPSLOCK, KEY_LSHIFT, KEY_RSHIFT, //Modifier keys.

            KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, //Arrow keys.

            KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8, KEY_9, KEY_0, //Number keys.

            KEY_PAD_1, KEY_PAD_2, KEY_PAD_3, KEY_PAD_4, KEY_PAD_5, KEY_PAD_6, KEY_PAD_7, KEY_PAD_8, KEY_PAD_9, KEY_PAD_0, //Number pad keys.

            KEY_F1, KEY_F2, KEY_F3, KEY_F4, KEY_F5, KEY_F6, KEY_F7, KEY_F8, KEY_F9, KEY_F10, KEY_F11, KEY_F12,  //Function keys.

            KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F, KEY_G, KEY_H, KEY_I, KEY_J, KEY_K, KEY_L, KEY_M, KEY_N, KEY_O, KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T, KEY_U, KEY_V, KEY_W, KEY_X, KEY_Y, KEY_Z //All the letters.
        };


        //Handles keyboard modifiers.
        enum MODIFIERS
        {
            MOD_CAPSLOCK, MOD_LSHIFT, MOD_RSHIFT
        };

        //Hooks into event loop, updates when keys are pressed down/let up, also handles modifers.
        void updateDown(int keycode);
        void updateUp(int keycode);

        //Returns true if the key is down, false otherwise. Just checks the array.
        bool isKeyDown(int keycode);
        //Only returns once, won't do anything subsequent times if the key is being held down.
        bool isKeyDownOnce(int keycode);

        //Functions for recording input, start, get without ending, end, check if recording.
        void startRecord();
        string getRecord();
        string endRecord();
        bool isRecording();
};
