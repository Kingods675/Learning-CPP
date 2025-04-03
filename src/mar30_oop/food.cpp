#include <iostream>
#include <string>

#include "food.h"

using namespace std;

Food::Food(string name) {
    this->name = name;
    rating = 0;
}

Food::Food(string name, int ratingInput) {
    this->name = name;
    rating = ratingInput;
}

void Food::printFood() {
    cout << "Name: " << name << " - Rating = " << Food::rating << endl;
}

void Food::printRating() {
    cout << "Rating of " << name << " = " << rating << endl;
}

void Food::printRating(int scale) {
    float newRating = (float) rating / 5 * scale;
    cout << "Rating of " << name << "on scale " << scale << " = " << newRating << endl;
}