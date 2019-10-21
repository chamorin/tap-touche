#ifndef WORD_H_INCLUDED
#define WORD_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

using namespace std;

class Word
{
protected:
    string _str;
    int _difficulty;
    float _posX;
    float _posY;
    int _currentCharPos;
    bool _isComplete;
    bool _isFirst;

    sf::RenderWindow &_window;
    //vector<Word> &_wVec;

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
    void setPos(float posX, float posY);
    void setColor(sf::Color color);

    float getPosX();

    void draw();
    void update();

    void move();
    void checkState();
    void changeCharColor();

    void checkKeyPressed();
};

#endif