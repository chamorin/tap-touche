#include "Game.h"

using namespace std;

Game::Game(sf::RenderWindow &window) : _window(window)
{
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
    for (int i = 0; i < 4; ++i) // Change here 4
    {
        _wVec.push_back(Word(_window, "charlobino", 1, (float)(rand() % 50 + 1), (float)(rand() % 6 + 1) * _rowSize));
    }
}

void Game::update()
{
    for (int i = 0; i < _wVec.size(); ++i)
    {
        _wVec[i].setPosX(_wVec[i].getPosX() + 1.0f);
        if (_wVec[i].getPosX() >= 600) // Change here 600
        {
            _wVec[i].setPos((float)(rand() % 50 + 1), (float)(rand() % 6 + 1) * _rowSize);
        }
        _wVec[i].update();
    }
}
