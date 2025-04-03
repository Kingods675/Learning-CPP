#include <iostream>

using namespace std;

int fibonacci(int n);

int hello(int i) {
    cout << "hello :" << i << endl;
    hello(i+1);

    return 0;

}


int main() {

    // int number;
    // cin >> number;
    // cout << fibonacci(number);


    // return 0;
    hello(1);
}



int fibonacci(int n) {
     

    int result = 0;
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-2; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    

    return result;
}