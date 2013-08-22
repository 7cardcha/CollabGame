#include "input.hpp"

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

    //Just default everything
    recordedInput = "";

    recording = false;

    capsToggle = false;
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
            if(capsToggle)
            {
                key[KEY_CAPSLOCK] = false;
                mod[MOD_CAPSLOCK] = false;
            }
            else
            {
                key[KEY_CAPSLOCK] = true;
                mod[MOD_CAPSLOCK] = true;
            }

            capsToggle =! capsToggle;

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

        //Number keys below.

        case ALLEGRO_KEY_1:
            key[KEY_1] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "!" : recordedInput = recordedInput + "1";
            }
            break;
        case ALLEGRO_KEY_2:
            key[KEY_2] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "@" : recordedInput = recordedInput + "2";
            }
            break;
        case ALLEGRO_KEY_3:
            key[KEY_3] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "#" : recordedInput = recordedInput + "3";
            }
            break;
        case ALLEGRO_KEY_4:
            key[KEY_4] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "$" : recordedInput = recordedInput + "4";
            }
            break;
        case ALLEGRO_KEY_5:
            key[KEY_5] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "%" : recordedInput = recordedInput + "5";
            }
            break;
        case ALLEGRO_KEY_6:
            key[KEY_6] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "^" : recordedInput = recordedInput + "6";
            }
            break;
        case ALLEGRO_KEY_7:
            key[KEY_7] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "&" : recordedInput = recordedInput + "7";
            }
            break;
        case ALLEGRO_KEY_8:
            key[KEY_8] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "*" : recordedInput = recordedInput + "8";
            }
            break;
        case ALLEGRO_KEY_9:
            key[KEY_9] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "(" : recordedInput = recordedInput + "9";
            }
            break;
        case ALLEGRO_KEY_0:
            key[KEY_0] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + ")" : recordedInput = recordedInput + "0";
            }
            break;
        //End numbers.


        //Once off keys below, input recording where applicable.

        case ALLEGRO_KEY_SPACE:
            key[KEY_SPACE] = true;
            if(recording)
            {
                recordedInput = recordedInput + " ";
            }
            break;

        case ALLEGRO_KEY_BACKSPACE:
            key[KEY_BACKSPACE] = true;
            if(recording)
            {
                recordedInput.erase(recordedInput.end() - 1);
            }
            break;
        case ALLEGRO_KEY_ESCAPE:
            key[KEY_ESCAPE] = true;
            break;
        case ALLEGRO_KEY_TILDE:
            key[KEY_TILDE] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "~" : recordedInput = recordedInput + "`";
            }
            break;
        case ALLEGRO_KEY_MINUS:
            key[KEY_MINUS] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "_" : recordedInput = recordedInput + "-";
            }
            break;
        case ALLEGRO_KEY_EQUALS:
            key[KEY_EQUALS] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "+" : recordedInput = recordedInput + "=";
            }
            break;
        case ALLEGRO_KEY_TAB:
            key[KEY_TAB] = true;
            break;
        case ALLEGRO_KEY_ENTER:
            key[KEY_ENTER] = true;
            if(recording)
            {
                recordedInput = recordedInput + "\n";
            }
            break;
        case ALLEGRO_KEY_QUOTE:
            key[KEY_QUOTE] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "\"" : recordedInput = recordedInput + "'";
            }
            break;
        case ALLEGRO_KEY_COMMA:
            key[KEY_COMMA] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "<" : recordedInput = recordedInput + ",";
            }
            break;
        case ALLEGRO_KEY_FULLSTOP:
            key[KEY_PERIOD] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + ">" : recordedInput = recordedInput + ".";
            }
            break;
        case ALLEGRO_KEY_OPENBRACE:
            key[KEY_OPENBRACE] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "{" : recordedInput = recordedInput + "[";
            }
            break;
        case ALLEGRO_KEY_CLOSEBRACE:
            key[KEY_CLOSEBRACE] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "}" : recordedInput = recordedInput + "]";
            }
            break;
        case ALLEGRO_KEY_SLASH:
            key[KEY_SLASH] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "?" : recordedInput = recordedInput + "/";
            }
            break;
        case ALLEGRO_KEY_BACKSLASH:
            key[KEY_BACKSLASH] = true;
            if(recording)
            {
                mod[MOD_LSHIFT] || mod[MOD_RSHIFT] ? recordedInput = recordedInput + "|" : recordedInput = recordedInput + "\\";
            }
            break;

        //End once off keys.

        //Function keys.

        case ALLEGRO_KEY_F1:
            key[KEY_F1] = true;
            break;
        case ALLEGRO_KEY_F2:
            key[KEY_F2] = true;
            break;
        case ALLEGRO_KEY_F3:
            key[KEY_F3] = true;
            break;
        case ALLEGRO_KEY_F4:
            key[KEY_F4] = true;
            break;
        case ALLEGRO_KEY_F5:
            key[KEY_F5] = true;
            break;
        case ALLEGRO_KEY_F6:
            key[KEY_F6] = true;
            break;
        case ALLEGRO_KEY_F7:
            key[KEY_F7] = true;
            break;
        case ALLEGRO_KEY_F8:
            key[KEY_F8] = true;
            break;
        case ALLEGRO_KEY_F9:
            key[KEY_F9] = true;
            break;
        case ALLEGRO_KEY_F10:
            key[KEY_F10] = true;
            break;
        case ALLEGRO_KEY_F11:
            key[KEY_F11] = true;
            break;
        case ALLEGRO_KEY_F12:
            key[KEY_F12] = true;
            break;

        //End function keys.


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
            //stub, do nothing here, all handled above!
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

        //Number keys.
        case ALLEGRO_KEY_1:
            key[KEY_1] = false;
            break;
        case ALLEGRO_KEY_2:
            key[KEY_2] = false;
            break;
        case ALLEGRO_KEY_3:
            key[KEY_3] = false;
            break;
        case ALLEGRO_KEY_4:
            key[KEY_4] = false;
            break;
        case ALLEGRO_KEY_5:
            key[KEY_5] = false;
            break;
        case ALLEGRO_KEY_6:
            key[KEY_6] = false;
            break;
        case ALLEGRO_KEY_7:
            key[KEY_7] = false;
            break;
        case ALLEGRO_KEY_8:
            key[KEY_8] = false;
            break;
        case ALLEGRO_KEY_9:
            key[KEY_9] = false;
            break;
        case ALLEGRO_KEY_0:
            key[KEY_0] = false;
            break;
        //End number keys.

        //Once off keys.

        case ALLEGRO_KEY_SPACE:
            key[KEY_SPACE] = false;
            break;
        case ALLEGRO_KEY_BACKSPACE:
            key[KEY_BACKSPACE] = false;
            break;
        case ALLEGRO_KEY_ESCAPE:
            key[KEY_ESCAPE] = false;
            break;
        case ALLEGRO_KEY_TILDE:
            key[KEY_TILDE] = false;
            break;
        case ALLEGRO_KEY_MINUS:
            key[KEY_MINUS] = false;
            break;
        case ALLEGRO_KEY_EQUALS:
            key[KEY_EQUALS] = false;
            break;
        case ALLEGRO_KEY_TAB:
            key[KEY_TAB] = false;
            break;
        case ALLEGRO_KEY_ENTER:
            key[KEY_ENTER] = false;
            break;
        case ALLEGRO_KEY_QUOTE:
            key[KEY_QUOTE] = false;
            break;
        case ALLEGRO_KEY_COMMA:
            key[KEY_COMMA] = false;
            break;
        case ALLEGRO_KEY_FULLSTOP:
            key[KEY_PERIOD] = false;
            break;
        case ALLEGRO_KEY_OPENBRACE:
            key[KEY_OPENBRACE] = false;
            break;
        case ALLEGRO_KEY_CLOSEBRACE:
            key[KEY_CLOSEBRACE] = false;
            break;
        case ALLEGRO_KEY_SLASH:
            key[KEY_SLASH] = false;
            break;
        case ALLEGRO_KEY_BACKSLASH:
            key[KEY_BACKSLASH] = false;
            break;
        //End once off.

        //Function keys.

        case ALLEGRO_KEY_F1:
            key[KEY_F1] = false;
            break;
        case ALLEGRO_KEY_F2:
            key[KEY_F2] = false;
            break;
        case ALLEGRO_KEY_F3:
            key[KEY_F3] = false;
            break;
        case ALLEGRO_KEY_F4:
            key[KEY_F4] = false;
            break;
        case ALLEGRO_KEY_F5:
            key[KEY_F5] = false;
            break;
        case ALLEGRO_KEY_F6:
            key[KEY_F6] = false;
            break;
        case ALLEGRO_KEY_F7:
            key[KEY_F7] = false;
            break;
        case ALLEGRO_KEY_F8:
            key[KEY_F8] = false;
            break;
        case ALLEGRO_KEY_F9:
            key[KEY_F9] = false;
            break;
        case ALLEGRO_KEY_F10:
            key[KEY_F10] = false;
            break;
        case ALLEGRO_KEY_F11:
            key[KEY_F11] = false;
            break;
        case ALLEGRO_KEY_F12:
            key[KEY_F12] = false;
            break;
        //End function keys.

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
