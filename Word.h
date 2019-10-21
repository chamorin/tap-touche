#ifndef WORD_H_INCLUDED
#define WORD_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class Word
{
protected:
    string _str;
    int _difficulty;
    float _posX;
    float _posY;
    bool _isComplete;
    int _remainingChar;

    sf::RenderWindow &_window;

    sf::Text _text;
    sf::Color _color;
    sf::Font _font;

public:
    Word(sf::RenderWindow &_window);
    Word(sf::RenderWindow &_window, string str, int difficulty, float posX, float posY);
    ~Word();

    void setStr(string str);
    void setDifficulty(int difficulty);
    void setPosX(float posX);
    void setPosY(float posY);
    void setColor(sf::Color color);

    void draw();
    void update();

    void move();
    void checkState();
    void changeCharColor();
};

#endif