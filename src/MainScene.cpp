#include "MainScene.hpp"

MainScene::MainScene(){
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS, {700, 450}, sf::Color::Yellow, CIRCLE_MOVE_SPEED));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 2, {400, 350}, sf::Color::Red, CIRCLE_MOVE_SPEED + 200));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 1, {700, 450}, sf::Color::Blue, CIRCLE_MOVE_SPEED + 500));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS + 5, {100, 100}, sf::Color::Green, CIRCLE_MOVE_SPEED + 150));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 3, {900, 200}, sf::Color::Magenta, CIRCLE_MOVE_SPEED + 300));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS + 2, {200, 700}, sf::Color::Cyan, CIRCLE_MOVE_SPEED + 100));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS, {1000, 800}, sf::Color(255, 165, 0), CIRCLE_MOVE_SPEED + 400)); // Màu Cam
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 4, {600, 100}, sf::Color(128, 0, 128), CIRCLE_MOVE_SPEED + 600)); // Màu Tím
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS + 3, {300, 500}, sf::Color::White, CIRCLE_MOVE_SPEED + 250));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 1, {850, 600}, sf::Color(255, 192, 203), CIRCLE_MOVE_SPEED + 350)); // Màu Hồng


    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS, {700, 450}, sf::Color::Yellow, CIRCLE_MOVE_SPEED));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 2, {400, 350}, sf::Color::Red, CIRCLE_MOVE_SPEED + 200));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 1, {700, 450}, sf::Color::Blue, CIRCLE_MOVE_SPEED + 500));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS + 5, {100, 100}, sf::Color::Green, CIRCLE_MOVE_SPEED + 150));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 3, {900, 200}, sf::Color::Magenta, CIRCLE_MOVE_SPEED + 300));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS + 2, {200, 700}, sf::Color::Cyan, CIRCLE_MOVE_SPEED + 100));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS, {1000, 800}, sf::Color(255, 165, 0), CIRCLE_MOVE_SPEED + 400)); // Màu Cam
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 4, {600, 100}, sf::Color(128, 0, 128), CIRCLE_MOVE_SPEED + 600)); // Màu Tím
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS + 3, {300, 500}, sf::Color::White, CIRCLE_MOVE_SPEED + 250));
    ma_circle.push_back(
        new Circle(CIRCLE_RADIUS - 1, {850, 600}, sf::Color(255, 192, 203), CIRCLE_MOVE_SPEED + 350)); // Màu Hồng
}

MainScene::~MainScene(){
    for(auto c : ma_circle){
        delete c;
    }
}

void MainScene::update(const float& dt){
    for(auto c : ma_circle){
        c->update(dt);
    }
}

void MainScene::render(sf::RenderTarget* target){
    for(auto c : ma_circle){
        target->draw(*c->getShape());
    }
}