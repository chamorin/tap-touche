#include "Word.h"
#include <iostream>

using namespace std;

Word::Word(sf::RenderWindow &window) : _window(window)
{
    _text = sf::Text();
}

Word::Word(sf::RenderWindow &window, string str, int difficulty, float posX, float posY) : _window(window)
{
    _text = sf::Text();
    setStr(str);
    setDifficulty(difficulty);
    setPosX(0.0f);
    setPosY(0.0f);
    setColor(sf::Color::Blue);
    _currentCharPos = 0;

    _font.loadFromFile("minecraft.ttf");
    _text.setFont(_font);
    _text.setCharacterSize(24);
}

Word::~Word()
{
}

void Word::setStr(string str)
{
    _str = str;
    _text.setString(_str);
}

void Word::setDifficulty(int difficulty)
{
    _difficulty = difficulty;
}

void Word::setPosX(float posX)
{
    _posX = posX;
    _text.setPosition(_posX, _posY);
}

void Word::setPosY(float posY)
{
    _posY = posY;
    _text.setPosition(_posX, _posY);
}

void Word::setPos(float posX, float posY)
{
}

void Word::setColor(sf::Color color)
{
    _color = color;
    _text.setFillColor(color);
}

void Word::draw()
{
    checkKeyPressed();
    _window.draw(_text);
}

void Word::update()
{
}

void Word::move()
{
}

void Word::checkState()
{
}

void Word::changeCharColor()
{
    sf::Text tempText;
    string tempStr;
    tempText.setFont(_font);
    tempText.setCharacterSize(24);
    tempText.setPosition(_posX, _posY);
    tempText.setFillColor(sf::Color::Red);

    for (int i = 0; i < _currentCharPos; ++i) {
        tempStr[i] = _str[i];
    }

    tempText.setString(tempStr);
    _window.draw(tempText);
}

void Word::checkKeyPressed()
{
    if (true)
    {
        // Check wich key is pressed and check if word contains the key letter
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            if (_str[_currentCharPos] == 'a') {
                ++_currentCharPos;
                changeCharColor();
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
        {
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        {
        }
        // Also call function changeCharColor on the entered letter
    }

    if (_currentCharPos >= _str.size()) {
        setStr("FINI");
    }
}
