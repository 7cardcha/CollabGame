#include "gameengine.hpp"

GameEngine::GameEngine(void)
{

}

bool GameEngine::init(int argc, char *argv[])
{
    // Process Command-Line Arguments
    if(!processArguments(argc, argv))
    {
        return false;
    }

    // Init sequence goes here.
    //  Allegro Initialization
    //  Configuration Init
    //  Game State Init

    // Terminated Normally
    return true;
}

bool GameEngine::processArguments(int argc, char *argv[])
{
    // process command line arguments and switches here.

    // Terminated Normally
    return true;
}

bool GameEngine::run(void)
{
    // Set isRunning to reflect state of the game
    isRunning = true;

    // TODO (Thorn#1#08/21/13): The main game loop will go here. I don't want to add it until I have Allegro initted so I can display and handle events, plus I'll need to figure out the clock or timer in allegro to add loop timing.

    // Terminated Normally
    return true;
}

void GameEngine::handleEvents(void)
{
    // Events will be handled here.
    // TODO (Thorn#1#08/21/13): This will need to be passed to the statemanager once it is implimented. The state manager will then pass them to the active state.
}

void GameEngine::update(void)
{
    // Runs the logic to update the state of the game.
}

void GameEngine::draw(void)
{
    // Draws the game to the display.
}
