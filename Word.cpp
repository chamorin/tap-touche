#include "Word.h"

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

void Word::setColor(sf::Color color)
{
    _color = color;
    _text.setFillColor(color);
}

void Word::draw()
{
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
}
