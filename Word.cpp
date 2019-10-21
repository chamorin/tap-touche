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
    setPos(posX, posY);
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
    _posX = posX;
    _posY = posY;
    _text.setPosition(_posX, _posY);
}

void Word::setColor(sf::Color color)
{
    _color = color;
    _text.setFillColor(color);
}

float Word::getPosX()
{
    return _posX;
}

void Word::draw()
{
    checkKeyPressed();
    _window.draw(_text);
}

void Word::update()
{
    checkState();
    draw();
    changeCharColor();
}

void Word::move()
{
}

void Word::checkState()
{
    if (_isComplete)
    {
        setStr("DONE");
    }
}

void Word::changeCharColor()
{
    if (!_isComplete)
    {
        sf::Text tempText = sf::Text();
        string tempStr;
        tempText.setFont(_font);
        tempText.setCharacterSize(24);
        tempText.setPosition(_posX, _posY);
        tempText.setFillColor(sf::Color::Yellow);

        for (int i = 0; i < _currentCharPos; ++i)
        {
            tempStr += _str[i];
        }

        tempText.setString(tempStr);
        _window.draw(tempText);
    }
}

void Word::checkKeyPressed()
{
    if (true) // replace with _isFirst
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            if (_str[_currentCharPos] == 'a')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
        {
            if (_str[_currentCharPos] == 'b')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
        {
            if (_str[_currentCharPos] == 'c')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            if (_str[_currentCharPos] == 'd')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        {
            if (_str[_currentCharPos] == 'e')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
        {
            if (_str[_currentCharPos] == 'f')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
        {
            if (_str[_currentCharPos] == 'g')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
        {
            if (_str[_currentCharPos] == 'h')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
        {
            if (_str[_currentCharPos] == 'i')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
        {
            if (_str[_currentCharPos] == 'j')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
        {
            if (_str[_currentCharPos] == 'k')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
        {
            if (_str[_currentCharPos] == 'l')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
        {
            if (_str[_currentCharPos] == 'm')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
        {
            if (_str[_currentCharPos] == 'n')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
        {
            if (_str[_currentCharPos] == 'o')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
        {
            if (_str[_currentCharPos] == 'p')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        {
            if (_str[_currentCharPos] == 'q')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        {
            if (_str[_currentCharPos] == 'r')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            if (_str[_currentCharPos] == 's')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        {
            if (_str[_currentCharPos] == 't')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
        {
            if (_str[_currentCharPos] == 'u')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
        {
            if (_str[_currentCharPos] == 'v')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            if (_str[_currentCharPos] == 'w')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
        {
            if (_str[_currentCharPos] == 'x')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
        {
            if (_str[_currentCharPos] == 'y')
            {
                ++_currentCharPos;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        {
            if (_str[_currentCharPos] == 'z')
            {
                ++_currentCharPos;
            }
        }
    }

    if (_currentCharPos >= _str.size())
    {
        _isComplete = true;
    }
}
