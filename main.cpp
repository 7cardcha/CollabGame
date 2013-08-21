#include <cstdlib>

#include "gameengine.hpp"

int main(int argc, char *argv[])
{
    // Create Game Instance
    GameEngine game;

    // Init Game or Fail
    if(!game.init(argc, argv))
    {
        return EXIT_FAILURE;
    }

    // Run Game or Fail
    if(!game.run())
    {
        return EXIT_FAILURE;
    }

  return EXIT_SUCCESS;
}
