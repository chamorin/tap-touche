#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <string>
#include <vector>

using namespace std;

class Game
{
protected:
    int _score;
    int _currentDifficulty;
    int _lifes;
public:
    Game();
    ~Game();
};

#endif