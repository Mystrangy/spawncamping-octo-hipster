#include <SFML/System.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>
int main(){

	sf::RenderWindow window(sf::VideoMode(640, 360), "workshop");
	window.setFramerateLimit(60);

	sf::View view;
	view.setSize(640, 360);
	
	sf::Event evt;
	while(window.isOpen()){
		while(window.pollEvent(evt)){
			switch(evt.type){
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

}
}