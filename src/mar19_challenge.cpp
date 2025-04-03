#include <iostream>
#include <cstring>
using namespace std;

void print_str(char str[], char delim) {
    int i = 0;
    int j = i+1;

    while (str[i] != '\0') {
        while (str[j] != delim) {
            j++;
        }
        i++;
    }
}


int main()
{
    char str[100] = "This,is,a,test,string";

    char delim;
    int N;
    cin >> delim;
    cin >> N;

    int i = 0;
    int j = i+1;

    int len = sizeof(str) / sizeof(str[0]);

    string words[20];
    int wordIndex = 0;

    while (str[i] != '\0') {
        while (str[j] != delim && str[j] != '\0') {
            j++;
        }

        // build string from i to j-1
        char* substr = new char[30];
        int substrIndex = 0;
        for (int a = i; a < j; a++) {
            // cout << str[a];
            substr[substrIndex] = str[a];
            substrIndex++;
        }
        
        words[wordIndex] = substr;
        wordIndex++;

        cout << "substring: " << substr << endl;
        delete[] substr;

        i = j+1;
        j = i+1;
    }

    cout << "substring: " << words[N-1];

    return 0;


}