#include <iostream>

using namespace std;

int main(void) {


    // int a;


    // a = 2;
    // a = 7;
    // cout << "a: " << a;

    long long nums[] = {10L, 20L, 30L};

    long long *pNums = nums;



    cout << "address of ptr: " << pNums << endl;
    cout << *pNums << endl;

    pNums++;

    cout << "address of ptr: " << pNums << endl;
    cout << *pNums << endl;

    pNums++;

    cout << "address of ptr: " << pNums << endl;
    cout << *pNums << endl;

    pNums++;

    cout << "address of ptr: " << pNums << endl;
    cout << *pNums << endl;

    pNums++;

    cout << "address of ptr: " << pNums << endl;
    cout << *pNums << endl;

    pNums++;

    cout << "address of ptr: " << pNums << endl;
    cout << *pNums << endl;



    return 0;
}