#include <iomanip>
#include "logic.h"
#include <unistd.h>

void Logic::load_board(Snake* snake, Food* food) {
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

    for (auto& x: *(snake->get_snake_body())) {
        board->at(x.point.Y).at(x.point.X) = x.body;
        std::cout << board->at(x.point.Y).at(x.point.X) << "\n";
    }

    std::shared_ptr<Body> pFood = food->get_food();
    int x_check;
    int y_check;
    while (true) {
        x_check = pFood->point.X;
        y_check = pFood->point.Y;
        if (board->at(y_check).at(x_check) == " ") {
            board->at(pFood->point.Y).at(pFood->point.X) = pFood->body;
            break;
        }
        pFood = food->get_food();
    }
}

void Logic::display_game_state() {
    std::system("clear");
    for (auto& x: *board) {
        std::cout << std::setw(20);
        for (auto& y: x) {
            std::cout << y;
        }
        std::cout << "\n";
    }
}

void Logic::move_snake(Player* player, Snake* snake) {

}

bool Logic::validate_snake(int num) {
    if (num == 5) {
        return false;
    }
    return true;
}

void Logic::setup() {
    auto snake = new Snake();
    auto food = new Food();
    auto player = new Player();

    snake->create_snake();
    int i = 0;
    while(validate_snake(i++)) {
        move_snake(player, snake);
        load_board(snake, food);
        display_game_state();
        snake->grow_snake();
        unsigned int microsecond = 500000;
        usleep(microsecond);
    }

    delete player;
    delete snake;
    delete food;
}