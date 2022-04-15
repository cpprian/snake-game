#include "food.h"
#include <random>


void Food::put_food() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist1(1,24);
    foodPoint->point.Y = dist1(rng);

    std::uniform_int_distribution<std::mt19937::result_type> dist2(1, 49);
    foodPoint->point.X = dist2(rng);
}

std::shared_ptr<Body> Food::get_food() {
    put_food();
    return foodPoint;
}

void Food::set_food(const int &x, const int &y) {
    foodPoint->point.X = x;
    foodPoint->point.Y = y;
}
