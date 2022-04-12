#ifndef SNAKE_GAME_LOGIC_H
#define SNAKE_GAME_LOGIC_H
#include <iostream>
#include <array>
#include <memory>

struct Body {
    struct Point {
        int X;
        int Y;
    };

    std::string body;
};

class logic {
private:
    // TODO: struct
    static const int BOARD_X = 50;
    static const int BOARD_Y = 25;
    std::unique_ptr<std::array<std::array<std::string, BOARD_X>, BOARD_Y>> board;

public:
    logic(): board{std::make_unique<std::array<std::array<std::string, BOARD_X>, BOARD_Y>>()} {}

    void setup();
    void load_board();
    void load_food();
    void load_snake();
    void load_player();
};


#endif //SNAKE_GAME_LOGIC_H
