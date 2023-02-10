//Daniel Oh
//daniel.oh26@myhunter.cuny.edu
//May 13, 2022
//This program asks the user for the year born and continues //asking until the number entered is 2018 or earlier.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Please enter year born:";
    cin >> year;
    while (year > 2018)
    {
        cout << "Entered a future year\n";
        cout << "Please enter year born:";
        cin >> year;
    }
    cout << "You entered: " << year;
    {
    return 0;
    }
}