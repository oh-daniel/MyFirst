//Daniel Oh
//daniel.oh26@myhunter.cuny.edu
//May 12, 2022
//This program asks the user for the month of the year (as a //number) and prints out a message depending on the season.

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter month (as a number):";
    cin >> month;
    if (month < 3 || month > 11)
    {
        cout << "Happy Winter";
    }
    else if (month >=3 && month < 7)
    {
        cout << "Happy Spring";
    }
    else if (month >=7 && month < 9)
    {
        cout << "Happy Summer";
    }
    else 
    {
        cout << "Happy Fall";
    }
    return 0;
}