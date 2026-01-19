#pragma once
#include "Include.hpp"

class Utils {
private:
    sf::Clock clock;
public:
    float deltaTime;
    void update_delta_time() {
        deltaTime = clock.restart().asSeconds();
    }
};