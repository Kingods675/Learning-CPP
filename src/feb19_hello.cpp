#include <iostream>

using namespace std;

int main()
{
    std:: cout <<"Hello world.\n" << std::endl << "This is a new line" <<endl;

    // while (1)
    // {}

    int a, b;

    cout <<"\nEnter number a: ";
    cin >> a;
    cout <<"Enter number b: ";
    cin >> b;

    int c = a + b;
    cout << a << " + " << b << " = " << c << endl;

    return 0;
}