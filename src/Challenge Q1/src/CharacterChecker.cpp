#include "CharacterChecker.h"
#include <iostream>

using namespace std;


std::string CheckCharacter(std::string word, int index) {
    char c = word.at(index);

    string category = "Unknown: ";

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        category = "Letter: ";
    } else if (c > '0' && c <'9') {
        category = "Digit: ";
    } else if (c == ' ') {
        category = "Whitespace: ";
    }

    string res = category + "'" + c + "'";

    return res;
}