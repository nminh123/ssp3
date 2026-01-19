#include "Circle.hpp"

Circle::Circle(uint8_t size, sf::Vector2f original_position, sf::Color color, const float& speed){
    mp_shape = new sf::CircleShape(size);
    this->mp_shape->setPosition(original_position);
    this->mp_shape->setFillColor(color);

    this->m_ySpeed = speed;
    this->m_xSpeed = speed;
}

Circle::~Circle(){
    delete this->mp_shape;
}

void Circle::move(const sf::Vector2f& offset, const float& dt){
    this->mp_shape->move(offset * dt);
}

void Circle::update(const float& dt){
    this->move({m_xSpeed, m_ySpeed}, dt);

    sf::Vector2f pos = this->mp_shape->getPosition();
    float radius = this->mp_shape->getRadius();

    if(pos.x  >= 1200  - (radius + 30) || pos.x  <= 0){
        m_xSpeed = -m_xSpeed;
    }
    if(pos.y >= 900  - (radius + 30) || pos.y <= 0){
        m_ySpeed = -m_ySpeed;
    }
}

void Circle::render(sf::RenderTarget* target){
    target->draw(*this->mp_shape);
}

sf::CircleShape * Circle::getShape(){
    return mp_shape;
}