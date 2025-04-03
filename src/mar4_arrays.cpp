# include <iostream>
# include <string>


using namespace std;


void printPyramid(int height);

int main(void) {
    int input;
    cout << "Enter pyramid height: ";
    cin >> input;
    printPyramid(input);
    return 0;
}


void printPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        for(int space = height; space > i; space--) {
            cout << " ";
        }
        for(int left = 0; left < i; left++) {
            cout << "#";
        }
        cout << "  ";
        for(int right = 0; right < i; right++) {
            cout << "#";
        }
        cout << endl;
    }
}
