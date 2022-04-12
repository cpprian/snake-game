#include <iomanip>
#include <random>
#include "logic.h"

void logic::load_board() {
    int check_frame = 1;

    for (auto& x: *board) {
        if (check_frame != 1 && check_frame != 25) {
            x.fill(" ");
            x.front() = "#";
            x.back() = "#";
        } else {
            x.fill("#");
        }

        check_frame++;
    }

    for (auto& x: *board) {
        std::cout << std::setw(20);
        for (auto& y: x) {
            std::cout << y;
        }
        std::cout << "\n";
    }
}

void logic::load_snake() {
    // TODO: load snake
}

void logic::load_food() {
    // TODO: load food
}

void logic::load_player() {
    // TODO: load player
}

void logic::setup() {
    load_board();
    load_food();
    load_snake();
}