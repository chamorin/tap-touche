#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	const int SCREEN_WIDTH = 600;
	const int SCREEN_HEIGHT = 400;

	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tap-Touche");
	sf::Font font;
	sf::Text text;

	font.loadFromFile("minecraft.ttf");
	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);

	// set the color
	text.setFillColor(sf::Color::Red);

	// set the text style
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);

	float posX = 0.0f;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		text.setPosition(posX, 0.0f);
		++posX;

		if (posX >= SCREEN_WIDTH) {
			posX = 0.0f;
		}

		window.clear();
		window.draw(text);
		window.display();
	}

	return 0;
}
