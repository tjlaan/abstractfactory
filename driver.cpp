#include <iostream>
#include "maze_game.hpp"

int main() {
    //Creates original maze game that is used (with the factories) to create the mazes
    maze_game* mazeGame = new maze_game();

    //The faery and future factories for creating the mazes
    maze_factory* faeryFact = new faery_factory();
    maze_factory* futureFact = new future_factory();

    maze* faeryMaze = mazeGame -> create_maze(faeryFact);
    maze* futureMaze = mazeGame -> create_maze(futureFact);

    faeryMaze -> describeAll();
    cout << endl;
    futureMaze -> describeAll();

    //Deletes all dynamic objects created in the program
    delete mazeGame;
    delete faeryFact;
    delete futureFact;
    delete faeryMaze;
    delete futureMaze;

    return 0;
}