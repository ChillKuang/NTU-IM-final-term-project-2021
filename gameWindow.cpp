#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<iostream>

using namespace std;

int main(){

    sf::RenderWindow window(sf::VideoMode(1024, 1024), "2 men Fighting!!!!");
    
    sf::CircleShape shape(10.f);

    shape.setFillColor(sf::Color::Red);

    

    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:

                window.close();
                break;
            }

        }

        window.clear();
        window.draw(shape);
        window.display();

    }

    return EXIT_SUCCESS;
}