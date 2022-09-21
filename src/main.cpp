#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>

using namespace sf;

int main(){
    RenderWindow window(VideoMode(800, 600), "SFML");

    while (window.isOpen()) {
    
        Event event;
        while(window.pollEvent(event)){
            if(event.type == Event::Closed){
                window.close();
            }
            
        }
        window.clear(Color(0, 0, 0, 0));

        CircleShape triangle(80, 3);
        triangle.setFillColor(Color(255, 255, 255));

    window.draw(triangle);

    window.display();
    }
    return 0;
}
