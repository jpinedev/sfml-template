#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    VideoMode vm(640, 480);
    RenderWindow window(vm, "Yeet");
    CircleShape shape(100.f);
    shape.setFillColor(Color::Blue);

    while(window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        window.clear();

        window.draw(shape);

        window.display();
    }
    
    return 0;
}