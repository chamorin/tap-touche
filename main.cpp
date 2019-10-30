#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include "Word.h"
#include "Game.h"

using namespace std;

int main()
{
	const int SCREEN_WIDTH = 600;
	const int SCREEN_HEIGHT = 400;
	const string backgroundPath = "background.png";

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tap-Touche");

	// Load background image
	sf::Texture backgroundTexture;
    sf::Sprite background;
    sf::Vector2u textureSize;
    sf::Vector2u windowSize;

    if (!backgroundTexture.loadFromFile(backgroundPath))
    {
        cout << "Error: Unable to load background image " << endl;
        exit(1);
    }
    else
    {
        textureSize = backgroundTexture.getSize();
        windowSize = window.getSize();

        float ScaleX = (float)windowSize.x / textureSize.x;
        float ScaleY = (float)windowSize.y / textureSize.y;

        background.setTexture(backgroundTexture);
        background.setScale(ScaleX, ScaleY);
    }


	Game game(window);
	vector<Word> wVec;

	// float randPosX;
	// float randPosY;

	// for (int i = 0; i < 4; ++i)
	// {
	// 	randPosX = (float)(rand() % 50 + 1);
	// 	randPosY = (float)(rand() % SCREEN_HEIGHT + 1);
	// 	Word word(window, "charlobino", 1, randPosX, randPosY);
	// 	wVec.push_back(word);
	// }

	game.init();

	//Word word(window, "", 1, 0.0f, 0.0f); // ??????

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(background);
		//game.update();

		window.display();
	}

	return 0;
}
