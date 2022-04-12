#ifndef SNAKE_GAME_PLAYER_H
#define SNAKE_GAME_PLAYER_H

#include <iostream>
#include <memory>

class player {
private:
    std::unique_ptr<int> score;
    bool isGame;

public:
    player(): score{std::make_unique<int>()} {
        isGame = true;
    }

public:
    int getScore();
    void setScore(const int& s);
    bool isRunning();
};


#endif //SNAKE_GAME_PLAYER_H
