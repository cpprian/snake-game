#ifndef SNAKE_GAME_SNAKE_H
#define SNAKE_GAME_SNAKE_H

#include <vector>
#include "logic.h"

class snake {
private:
    std::unique_ptr<int> velocity;
    std::unique_ptr<std::vector<Body>> snake_body;

public:
    snake():
        velocity{std::make_unique<int>()},
        snake_body{std::make_unique<std::vector<Body>>()} {};

    void create_snake();
    void move_snake();
    bool validate_snake();
    int getVelocity();
    void setVelocity(const int& v);
    void grow_snake();
    void shrink_snake();
    void accelerate_snake();
};


#endif //SNAKE_GAME_SNAKE_H
