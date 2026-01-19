#include "Game.hpp"
#include <SFML/Window/Keyboard.hpp>

Game::Game() {
  sf::VideoMode vm({1200, 900});
  mp_window = new sf::RenderWindow(vm, "SFML Simple Practice 3",
                                  sf::Style::Close, sf::State::Windowed);

  mp_scene = new MainScene();
}

Game::~Game() { 
    delete this->mp_window;
    delete this->mp_scene;
}

void Game::run() {
  while (this->mp_window->isOpen()) {
    this->update();
    this->render();
    utils.update_delta_time();
  }
}

void Game::update() {
  while (std::optional event = this->mp_window->pollEvent()) {
    if (event->is<sf::Event::Closed>() || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
      this->end_application(*this->mp_window);
    }
  }
  // Scene render below
  mp_scene->update(utils.deltaTime);
}

void Game::render() {
  this->mp_window->clear();
  // Scene render here
  mp_scene->render(mp_window);
  this->mp_window->display();
}

void Game::end_application(sf::Window &w) {
  w.close();
  std::cout << "Application ending" << std::endl;
}