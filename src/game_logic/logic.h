#ifndef SNAKE_GAME_LOGIC_H
#define SNAKE_GAME_LOGIC_H
#include <iostream>
#include <array>
#include <memory>
#include "body.h"
#include "snake.h"
#include "food.h"
#include "player.h"

class Logic {
private:
    static const int BOARD_X = 50;
    static const int BOARD_Y = 25;
    std::unique_ptr<std::array<std::array<std::string, BOARD_X>, BOARD_Y>> board;

public:
    Logic(): board{std::make_unique<std::array<std::array<std::string, BOARD_X>, BOARD_Y>>()} {}

    void setup();
    void load_board(Snake* snake, Food* food);
    void display_game_state();

    bool validate_snake(int num);
    void move_snake(Player* player, Snake* snake);
};


#endif //SNAKE_GAME_LOGIC_H
