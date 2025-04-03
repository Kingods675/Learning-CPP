#include <iostream>

using namespace std;


int main() {
    int inputYear = 1913;

    int Year = 4;
    cout << inputYear << endl;
   
    if ( inputYear % 100 == 0 && inputYear % 4 != 0 ) {
        Year = 3;
    } else if ( inputYear % 4 == 0 && inputYear % 100 != 0) {
        Year = 2;
    } else if (inputYear % 4 == 0 && inputYear % 100 == 0) {
        Year = 1;
    }
    cout << Year;
    return Year;



}