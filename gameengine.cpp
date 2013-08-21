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
    return true;
}

bool GameEngine::processArguments(int argc, char *argv[])
{
    // process command line arguments and switches here.
    return true;
}

bool GameEngine::run(void)
{
    return true;
}

void GameEngine::handleEvents(void)
{

}

void GameEngine::update(void)
{

}

void GameEngine::draw(void)
{

}

