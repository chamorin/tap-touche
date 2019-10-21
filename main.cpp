#include <SFML/Graphics.hpp>
#include "Word.h"

using namespace std;

int main()
{
	const int SCREEN_WIDTH = 600;
	const int SCREEN_HEIGHT = 400;

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tap-Touche");
	Word word(window, "charlobino", 1, 0.0f, SCREEN_HEIGHT/2);

	float posX = 0.0f;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		word.setPosX(posX);
		++posX;

		if (posX >= SCREEN_WIDTH)
		{
			posX = 0.0f;
		}

		window.clear();
		word.update();
		window.display();
	}

	return 0;
}
