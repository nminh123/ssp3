#pragma once
#include "Circle.hpp"

class MainScene {
private:
  std::vector<Circle*> ma_circle;
public:
  MainScene();
  ~MainScene();

  void update(const float& dt);
  void render(sf::RenderTarget* target);
};