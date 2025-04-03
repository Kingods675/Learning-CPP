#include <iostream>
#include <string>

using namespace std;

void swapValues(int *pA, int *pB);
void toUpperCase(string *ptrName);


int main(void) {
    // int a;
    // int b;

    // cout << "Enter a: ";
    // cin >> a;
    
    
    // cout << "Enter b: ";
    // cin >> b;

    // int *pA = &a;
    // int *pB = &b;

    // swapValues(pA, pB);

    // cout << "a: " << a << endl;
    // cout << "b: " << b;

    string name;
    getline(cin, name);
    string *ptrName = &name;
    toUpperCase(ptrName);
    cout << name << endl;
                 

    return 0;
}






void swapValues(int *pA, int *pB){
    int c = *pA;
    *pA = *pB;
    *pB = c;
}

void toUpperCase(string *ptrName) {
    for (int i = 0; i < ptrName->length(); i++) {
        char c = ptrName->at(i);
        if (c >= 'a' & c <= 'z') {
            char upperC = c = c - ('a' - 'A');
            (*ptrName)[i] = upperC;
        }

    }
}