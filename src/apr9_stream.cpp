#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    // bỏ data vào string
    ostringstream out_str_stream;

    out_str_stream << "Vuong" << " " << "Nguyen";

    cout << out_str_stream.str() << endl;

    if (out_str_stream.good()) {
        cout << "Good stream" << endl;
    }

    // láy data ra từ stream
    istringstream in_str_stream(out_str_stream.str());

    string fname;
    string lname;

    in_str_stream >> fname;
    in_str_stream >> lname;

    cout << "Last name: " << lname << endl;
    cout << "First name " << fname << endl;
}