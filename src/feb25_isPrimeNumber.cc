#include <iostream>
#include <String>

using namespace std;


bool isPrimeNumber(int num);

int main() {

    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (isPrimeNumber(num) == true) {
        cout << num << " is a prime number";
    } else { 
        cout << num << " is not a prime number"; 
    }
    
    
    return 0;
}

bool isPrimeNumber(int num) {
    if (num == 1) return false;

    int i = 2;
    while (i < num) {
        if (num % i == 0) return false;
        i++;
    }

    return true;

}