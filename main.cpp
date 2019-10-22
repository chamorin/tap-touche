#include <SFML/Graphics.hpp>
#include "Word.h"

using namespace std;

int main()
{
	const int SCREEN_WIDTH = 600;
	const int SCREEN_HEIGHT = 400;

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tap-Touche");
	vector<Word> wVec;

	sf::Texture backgroundTexture;
	sf::Sprite background;
	sf::Vector2u textureSize;
	sf::Vector2u windowSize;

	if (!backgroundTexture.loadFromFile("background.png"))
	{
		return -1;
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
	float randPosX;
	float randPosY;

	for (int i = 0; i < 4; ++i)
	{
		randPosX = (float)(rand() % (SCREEN_WIDTH / 3) + 1);
		randPosY = (float)(rand() % SCREEN_HEIGHT + 1);
		Word word(window, "charlobino", 1, randPosX, randPosY);
		wVec.push_back(word);
	}

	Word word(window, "", 1, 0.0f, 0.0f); // ??????

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
		for (int i = 0; i < wVec.size(); ++i)
		{
			wVec[i].setPosX(wVec[i].getPosX() + 1.0f);
			if (wVec[i].getPosX() >= SCREEN_WIDTH)
			{
				randPosX = (float)(rand() % (SCREEN_WIDTH / 3) + 1);
				randPosY = (float)(rand() % SCREEN_HEIGHT + 1);
				wVec[i].setPos(randPosX, randPosY);
			}
			wVec[i].update();
		}
		window.display();
	}

	return 0;
}
