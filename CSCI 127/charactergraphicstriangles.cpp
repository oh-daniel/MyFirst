//Daniel Oh
//daniel.oh26@myhunter.cuny.edu
//May 11, 2022
//This program asks the user for a number and draws a triangle of that height and width using character graphics.
#include <iostream>
using namespace std;

int main()
{
    int num;
    int i;
    int j;
    cout << "Enter a number: ";
    cin >> num;
    for (i = 0; i < num; i++){
        for (j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }   
    return 0;
}
