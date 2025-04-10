#include <iostream>
#include <fstream>
#include <filesystem>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {

    // cout << argv[1] << endl;

    if (!argv[1]) {
        cerr << "Error: please provide a file name to the command line" << endl;
        return EXIT_FAILURE;
    }

    string fileName = argv[1];
    fileName += ".cpp";

    if (filesystem::exists(fileName)) {
        cerr << "Error: File already exists. File was not created" << endl;
        return EXIT_FAILURE;
    }

    ofstream newFile;
    newFile.open(fileName);

    cout << "Created file: " << fileName << "successfully!" << endl;

    if (!newFile.is_open()) {
        cerr << "Error creating new file" << endl;
        return EXIT_FAILURE;
    }

    // write content from a template file to this new file
    ifstream templateFile;
    templateFile.open("template.cpp");

    char c;
    ostringstream content;
    // string content;
    while (templateFile.get(c)) {
        content << c;
        // content += c;
    }

    newFile << content.str();

    newFile.close();
    
    cout << "Successfully written to " << "\"" << fileName << "\"" << endl;


    return EXIT_SUCCESS;
}