#include "MainScene.hpp"

class Game {
public:
  Game();
  ~Game();
  void run();

private:
  Utils utils;
  sf::RenderWindow *mp_window;
  MainScene* mp_scene;

  void update();
  void render();
  void end_application(sf::Window &w);
};