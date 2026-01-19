#pragma once
#include "Utils/Utils.hpp"

class Circle{
private:
    sf::CircleShape* mp_shape;
    float m_ySpeed, m_xSpeed;
public:
    Circle(uint8_t size, sf::Vector2f original_position, sf::Color color, const float& speed);
    ~Circle();

    void move(const sf::Vector2f& offset, const float& dt);
    void update(const float& dt);
    void render(sf::RenderTarget* target);

    sf::CircleShape * getShape(); 
};