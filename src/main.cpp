#include <time.h>

#include <SFML/Graphics.hpp>
int main() {
  sf::RenderWindow window(sf::VideoMode(320, 480), "The Game!");
  while (window.isOpen()) {
    sf::Event e;
    while (window.pollEvent(e)) {
      if (e.type == sf::Event::Closed) {
        window.close();
      }
    }
    window.clear(sf::Color::White);
  }
  return 0;
}
