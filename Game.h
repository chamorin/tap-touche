#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
#include <time.h>
#include "Word.h"

using namespace std;

class Game
{
protected:
    int _score;
    int _currentDifficulty;
    int _lifes;
    float _rowSize;
    string _backgroundPath;
    sf::Sprite _background;
    sf::RenderWindow &_window;
    vector<Word> _wVec;

public:
    Game(sf::RenderWindow &_window);
    ~Game();

    void loadBackground();

    void init();
    void update();
};

#endif