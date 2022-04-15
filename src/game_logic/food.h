#ifndef SNAKE_GAME_FOOD_H
#define SNAKE_GAME_FOOD_H

#include "body.h"
#include <iostream>
#include <memory>

class Food {
private:
    std::shared_ptr<Body> foodPoint;

public:
    Food(): foodPoint{std::make_unique<Body>()} {
        foodPoint->body = "@";
    };

    void put_food();
    void set_food(const int& X, const int& Y);
    std::shared_ptr<Body> get_food();
};


#endif //SNAKE_GAME_FOOD_H
