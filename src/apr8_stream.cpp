#include <iostream>
#include <String>
#include <fstream>


using namespace std;

int main() {
    string filename = "file.txt";
    ofstream myfile;
    // myfile.open (filename);
    myfile.open(filename, ofstream::app);
    myfile << "hehe" << endl;
    myfile.close();

    return EXIT_SUCCESS;
}