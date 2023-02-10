#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    istringstream strm;
    strm.str("January 24, 1973");
    string month, comma;
    int day, year;
    strm >> month >> day >> comma >> year;
    cout << month << endl;
    cout << day << endl;
    cout << comma << endl;
    cout << year << endl;
    return 0;
}

// ostringstream converts integers in to strings