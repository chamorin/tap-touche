#include "Game.h"

using namespace std;

Game::Game(sf::RenderWindow &window) : _window(window)
{
    srand (time(NULL));
    _rowSize = (float)(400 / 6); // Change here 400
}

Game::~Game()
{
}

void Game::loadBackground()
{
}

void Game::init()
{
    float randPosX;
    float randPosY;

    for (int i = 0; i < 4; ++i)
    {
        randPosX = (float)(rand() % 50 + 1);
        randPosY = (float)((rand() % 6 + 1) * _rowSize);
        Word word(_window, "charlobino", 1, randPosX, randPosY);
        _wVec.push_back(word);
    }
}

void Game::update()
{
    float randPosX;
    float randPosY;
    for (int i = 0; i < _wVec.size(); ++i)
    {
        _wVec[i].setPosX(_wVec[i].getPosX() + 1.0f);
        if (_wVec[i].getPosX() >= 600) // Change here 600
        {
            randPosX = (float)(rand() % 50 + 1);
            randPosY = (float)((rand() % 6 + 1) * _rowSize);
            _wVec[i].setPos(randPosX, randPosY);
            cout << randPosY << endl;
        }
        _wVec[i].update();
    }
}
