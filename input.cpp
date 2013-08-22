#include "Input.hpp"

/*
Intended to make input more abstract,

handles key input and hooks into the

event loop. Definitely not done,

definitely needs more polish.
*/

//Constructor to initalize variables and arrays.
Input::Input()
{
    //Loop through each array and set them all to false, default value.
    for(int i = 0; i < 128; i++)
    {
        key[i] = false;
    }

    for(int i = 0; i < 128; i++)
    {
        prev_key[i] = false;
    }

    for(int i = 0; i < 32; i++)
    {
        mod[i] = false;
    }

    recordedInput = "";

    recording = false;
}

//Hooks into event loop, updates when keys are pressed down.
void Input::updateDown(int keycode)
{
    //Reset the message if we are not recording.
    recording ? "" : recordedInput = "";

    //Switch the key codes and update the key array.

    switch(keycode)
    {
        //Handle modifiers a bit specially.

        case ALLEGRO_KEY_CAPSLOCK:
            key[KEY_CAPSLOCK] = true;

            mod[MOD_CAPSLOCK] = true;
            break;

        case ALLEGRO_KEY_LSHIFT:
            key[KEY_LSHIFT] = true;

            mod[MOD_LSHIFT] = true;
            break;

        case ALLEGRO_KEY_RSHIFT:
            key[KEY_RSHIFT] = true;

            mod[MOD_RSHIFT] = true;
            break;

        //End modifiers

        //Arrow keys.

        case ALLEGRO_KEY_UP:
            key[KEY_UP] = true;
            break;
        case ALLEGRO_KEY_DOWN:
            key[KEY_DOWN] = true;
            break;
        case ALLEGRO_KEY_LEFT:
            key[KEY_LEFT] = true;
            break;
        case ALLEGRO_KEY_RIGHT:
            key[KEY_RIGHT] = true;
            break;

        //End arrow keys.

        //Handle all alphabet keys, if we are recording we need to add them to the record variable and check if they should be uppercase.

        case ALLEGRO_KEY_A:
            key[KEY_A] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "A" : recordedInput = recordedInput + "a";
            }
            break;
        case ALLEGRO_KEY_B:
            key[KEY_B] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "B" : recordedInput = recordedInput + "b";
            }
            break;
        case ALLEGRO_KEY_C:
            key[KEY_C] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "C" : recordedInput = recordedInput + "c";
            }
            break;
        case ALLEGRO_KEY_D:
            key[KEY_D] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "D" : recordedInput = recordedInput + "d";
            }
            break;
        case ALLEGRO_KEY_E:
            key[KEY_E] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "E" : recordedInput = recordedInput + "e";
            }
            break;
        case ALLEGRO_KEY_F:
            key[KEY_F] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "F" : recordedInput = recordedInput + "f";
            }
            break;
        case ALLEGRO_KEY_G:
            key[KEY_G] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "G" : recordedInput = recordedInput + "g";
            }
            break;
        case ALLEGRO_KEY_H:
            key[KEY_H] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "H" : recordedInput = recordedInput + "h";
            }
            break;
        case ALLEGRO_KEY_I:
            key[KEY_I] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "I" : recordedInput = recordedInput + "i";
            }
            break;
        case ALLEGRO_KEY_J:
            key[KEY_J] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "J" : recordedInput = recordedInput + "j";
            }
            break;
        case ALLEGRO_KEY_K:
            key[KEY_K] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "K" : recordedInput = recordedInput + "k";
            }
            break;
        case ALLEGRO_KEY_L:
            key[KEY_L] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "L" : recordedInput = recordedInput + "l";
            }
            break;
        case ALLEGRO_KEY_M:
            key[KEY_M] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "M" : recordedInput = recordedInput + "m";
            }
            break;
        case ALLEGRO_KEY_N:
            key[KEY_N] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "N" : recordedInput = recordedInput + "n";
            }
            break;
        case ALLEGRO_KEY_O:
            key[KEY_O] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "O" : recordedInput = recordedInput + "o";
            }
            break;
        case ALLEGRO_KEY_P:
            key[KEY_P] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "P" : recordedInput = recordedInput + "p";
            }
            break;
        case ALLEGRO_KEY_Q:
            key[KEY_Q] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "Q" : recordedInput = recordedInput + "q";
            }
            break;
        case ALLEGRO_KEY_R:
            key[KEY_R] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "R" : recordedInput = recordedInput + "r";
            }
            break;
        case ALLEGRO_KEY_S:
            key[KEY_S] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "S" : recordedInput = recordedInput + "s";
            }
            break;
        case ALLEGRO_KEY_T:
            key[KEY_T] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "T" : recordedInput = recordedInput + "t";
            }
            break;
        case ALLEGRO_KEY_U:
            key[KEY_U] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "U" : recordedInput = recordedInput + "u";
            }
            break;
        case ALLEGRO_KEY_V:
            key[KEY_V] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "V" : recordedInput = recordedInput + "v";
            }
            break;
        case ALLEGRO_KEY_W:
            key[KEY_W] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "W" : recordedInput = recordedInput + "w";
            }
            break;
        case ALLEGRO_KEY_X:
            key[KEY_X] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "X" : recordedInput = recordedInput + "x";
            }
            break;
        case ALLEGRO_KEY_Y:
            key[KEY_Y] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "Y" : recordedInput = recordedInput + "y";
            }
            break;
        case ALLEGRO_KEY_Z:
            key[KEY_Z] = true;
            if(recording)
            {
                 mod[MOD_CAPSLOCK] || mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "Z" : recordedInput = recordedInput + "z";
            }
            break;
        //End alphabet keys.


        default:
            break;
    }
}

//Hooks into event loop, updates when keys are let up.
void Input::updateUp(int keycode)
{
    //Reset the message if we are not recording.
    recording ? "" : recordedInput = "";

    //Switch the key codes and update the key array.
    switch(keycode)
    {
        //Handle modifiers a bit specially.
        case ALLEGRO_KEY_CAPSLOCK:
            key[KEY_CAPSLOCK] = false;

            mod[MOD_CAPSLOCK] = false;
            break;

        case ALLEGRO_KEY_LSHIFT:
            key[KEY_LSHIFT] = false;

            mod[MOD_LSHIFT] = false;
            break;

        case ALLEGRO_KEY_RSHIFT:
            key[KEY_RSHIFT] = false;

            mod[MOD_RSHIFT] = false;
            break;

        //End modifiers.

        //Handle arrow keys.
        case ALLEGRO_KEY_UP:
            key[KEY_UP] = false;
            break;
        case ALLEGRO_KEY_DOWN:
            key[KEY_DOWN] = false;
            break;
        case ALLEGRO_KEY_LEFT:
            key[KEY_LEFT] = false;
            break;
        case ALLEGRO_KEY_RIGHT:
            key[KEY_RIGHT] = false;
            break;
        //End arrow keys.

        //Alphabet keys, no need to record up key events.

        case ALLEGRO_KEY_A:
            key[KEY_A] = false;
            break;
        case ALLEGRO_KEY_B:
            key[KEY_B] = false;
            break;
        case ALLEGRO_KEY_C:
            key[KEY_C] = false;
            break;
        case ALLEGRO_KEY_D:
            key[KEY_D] = false;
            break;
        case ALLEGRO_KEY_E:
            key[KEY_E] = false;
            break;
        case ALLEGRO_KEY_F:
            key[KEY_F] = false;
            break;
        case ALLEGRO_KEY_G:
            key[KEY_G] = false;
            break;
        case ALLEGRO_KEY_H:
            key[KEY_H] = false;
            break;
        case ALLEGRO_KEY_I:
            key[KEY_I] = false;
            break;
        case ALLEGRO_KEY_J:
            key[KEY_J] = false;
            break;
        case ALLEGRO_KEY_K:
            key[KEY_K] = false;
            break;
        case ALLEGRO_KEY_L:
            key[KEY_L] = false;
            break;
        case ALLEGRO_KEY_M:
            key[KEY_M] = false;
            break;
        case ALLEGRO_KEY_N:
            key[KEY_N] = false;
            break;
        case ALLEGRO_KEY_O:
            key[KEY_O] = false;
            break;
        case ALLEGRO_KEY_P:
            key[KEY_P] = false;
            break;
        case ALLEGRO_KEY_Q:
            key[KEY_Q] = false;
            break;
        case ALLEGRO_KEY_R:
            key[KEY_R] = false;
            break;
        case ALLEGRO_KEY_S:
            key[KEY_S] = false;
            break;
        case ALLEGRO_KEY_T:
            key[KEY_T] = false;
            break;
        case ALLEGRO_KEY_U:
            key[KEY_U] = false;
            break;
        case ALLEGRO_KEY_V:
            key[KEY_V] = false;
            break;
        case ALLEGRO_KEY_W:
            key[KEY_W] = false;
            break;
        case ALLEGRO_KEY_X:
            key[KEY_X] = false;
            break;
        case ALLEGRO_KEY_Y:
            key[KEY_Y] = false;
            break;
        case ALLEGRO_KEY_Z:
            key[KEY_Z] = false;
            break;

        //End alphabet keys.

        default:
            break;
    }
}

//Returns true if the key is down, false otherwise. Just checks the array.
bool Input::isKeyDown(int keycode)
{
    return key[keycode];
}

//Only returns once, won't do anything subsequent times if the key is being held down.
bool Input::isKeyDownOnce(int keycode)
{
    //Pretty self explanatory, checks what it was previously, they must be different, then resets prev_key.
    if(key[keycode] && !prev_key[keycode])
    {
        prev_key[keycode] = key[keycode];
        return true;
    }
    prev_key[keycode] = key[keycode];
    return false;
}

//Functions for recording input, start, get without ending, end.

void Input::startRecord()
{
    recording = true;
}

string Input::getRecord()
{
    return recordedInput;
}

string Input::endRecord()
{
    recording = false;

    return recordedInput;
}

bool Input::isRecording()
{
    return recording;
}
