#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main () {
    string fname;
    string lname;

    cin >> fname;
    cin >> lname;

    string filename = "HW.txt";
    ofstream myFile;
    myFile.open(filename);

    for (int i = 0; i < 100; i++) {
        myFile << i+1 <<"." << fname << " " << lname << endl;
    }

    myFile.close();

    return 0;
}