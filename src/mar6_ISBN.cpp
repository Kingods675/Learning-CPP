# include <iostream>
# include <string>
# include <vector>

using namespace std;

bool is_isbn_valid(string isbn);
int main(void) {
    
    cout << endl << "valid?: " << is_isbn_valid("9780-306-40615-7") << endl; // true->1
    cout << endl << "valid?: " << is_isbn_valid("9780306406157") << endl; // true->1
    cout << endl << "valid?: " << is_isbn_valid("978030640615-7") << endl; // true->1
    cout << endl << "valid?: " << is_isbn_valid("9780-306-40615-8") << endl; // false->0



    return 0;
}



bool is_isbn_valid(string isbn) {
    int sum = 0;
    int counter = 0;
    

    for (int i = 0; i < isbn.length() -1; i++) {
        
        char ch = isbn[i];


        if (ch >= '0' && ch <= '9') {
            int chartoInt = ch - '0';
            
            // cout << chartoInt << "," ;
            if (counter % 2 == 1) {
                chartoInt *= 3;
            } 
            sum += chartoInt;
            counter++;
        }

    }
    char lastDigit = isbn[isbn.length() -1];
    int lastDigitNumber = lastDigit - '0';
    int remainder = sum % 10;
    if ( 10 - remainder == lastDigitNumber) {
        return true;
    } else {
        return false;
    }
}