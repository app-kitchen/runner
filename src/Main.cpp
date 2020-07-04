#include <iostream>

#include <SFML/Window.hpp>

int main(int argc, char** argv) {

  // Create an SFML window object
  sf::Window window;
  window.create(sf::VideoMode(800, 600), "App Kitchen");

  // Run program as long as the window is open
  while (window.isOpen()) {
    
    // Check the window events
    sf::Event event;
    while (window.pollEvent(event)) {

      // Close window if close event is triggered
      if (event.type == sf::Event::Closed) {
        window.close();  
      } 
    }
  }

  // Print all given arguments
  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }

  return 0;
}
