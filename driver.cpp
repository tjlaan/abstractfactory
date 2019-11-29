#include <iostream>
#include "maze_factory.hpp"
#include "maze_game.hpp"

int main() {
    maze_game* mazeGame = new maze_game();

    maze_factory* faeryFact = new faery_factory();
    maze_factory* futureFact = new future_factory();

    maze* faeryMaze = mazeGame -> create_maze(faeryFact);
    maze* futureMaze = mazeGame -> create_maze(futureFact);

    faeryMaze -> describeAll();
    cout << endl;
    futureMaze -> describeAll();

    delete mazeGame;
    delete faeryFact;
    delete futureFact;
    delete faeryMaze;
    delete futureMaze;

    return 0;
}