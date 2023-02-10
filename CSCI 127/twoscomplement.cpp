//Daniel Oh
//daniel.oh26@myhunter.cuny.edu
//May 17, 2022
//This program asks the user for a whole number between -31 and 31 //and prints out the number in two's complement notation.


#include <iostream>
using namespace std;

int main()
{
    int n , x;
    cout << "Enter a number: ";
    cin >> n;
    int b = 16;
    if (n < 0){
        cout << "1";
        x = 32 + n;
    }
    else if (n >= 0)
    {
        cout << "0";
        x = n;
    }
    while (b > 0.5)
    {
        if (x >= b)
            cout << "1";
        else
        {
            cout << "0";
        }
        x = x % b;
        b = b/2;    
    }
    return 0;
}