#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>

using namespace std;

class Food {
    public:
        //contructor overloading
        // can do more contructor with 1 name.
        Food(string name);
        Food(string name = "rice", int rating = 0);

        void printFood();


        // not recommended. put implementation in cpp file not header file.
        // void printName() {
        //     cout << "printing name from header: " << name << endl;
        // } 


        // method overloading
        void printRating();
        void printRating(int scale);

    private:    
        string name;
        int rating;
};


#endif