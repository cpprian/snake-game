#include "player.h"

int player::getScore() {
    return *score;
}

void player::setScore(const int& s) {
    *score = s;
}

bool player::isRunning() {
    return false;
}