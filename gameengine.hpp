#pragma once


/*
The Game Engine is the wrapper for all the other systems contained in making the game run. It frees up the entry point of rogue variables and methods that should be put in related classes.

It will handle the init of the game, processing command line arguments, running the main game loop, and the clean up.
*/

class GameEngine
{

    // Constructors / Destructors

public:

    GameEngine(void);

    // Game Engine Init - Program Arguments are the Parameters.
    bool init(int argc, char *argv[]);

private:

    // Initializes game engine.
    bool processArguments(int argc, char *argv[]);

public:

    // Starts the main game loop
    bool run(void);

private:
    // TODO (Thorn#1#08/21/13): The event handler, update, and draw routines will all need to be passed a 'this' instance of the game engine. Update will need Delta Time, and draw will need an interpolation. Until then, (void)

    // Event Handler
    void handleEvents(void);

    // Game Update
    void update(void);

    // Draw routine
    void draw(void);

    // getter for isRunning
    bool running(void) {return isRunning;}

    // setter for isRunning
    void quit(void) {isRunning = false;}

private:

  // Data Memebers
  ////////////////////////////////////////////////////////////

  bool isRunning;   ///< To see if the game is still running.

};
