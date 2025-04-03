#include <iostream>
using namespace std;

int main() {
    double loan, curBalance, interRate;
    cin >> loan >> curBalance >> interRate;

    int payments = 0;

    while(curBalance <= loan) {
        curBalance = (curBalance * interRate) + curBalance;
        payments++;
    }

    cout << payments;
    
   return 0;
}