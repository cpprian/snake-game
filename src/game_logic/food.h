#ifndef SNAKE_GAME_FOOD_H
#define SNAKE_GAME_FOOD_H

#include "logic.h"
#include <iostream>
#include <memory>

enum POINT{APPLE=1, BONUS, BROCCOLI};

class food {
private:


    std::unique_ptr<Body> foodPoint;

public:
    food(): foodPoint{std::make_unique<Body>()} {};

    bool isExist();
    void putFood();
};


#endif //SNAKE_GAME_FOOD_H
