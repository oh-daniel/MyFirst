//Daniel Oh
//daniel.oh26@myhunter.cuny.edu
//May 16, 2022
//This program prints the change in population of the United //States.

#include <iostream>
#include <iomanip>
using namespace std ;
int main() {
    int year ;
    double pop, death_rate, birth_rate ;
    cout << setprecision(2) << fixed ;
    pop = 325.70 ;
    birth_rate = 12.4 / 1000 ;
    death_rate = 8.4 / 1000 ;
    cout << "Please enter the number of years: " ;
    cin >> year ;
    for (int i = 2017 ; i <= 2017 + year ; i++) {
        cout << "Year " << i << "  " << pop ;
        pop += birth_rate * pop - death_rate * pop ;
        cout << endl ;
    }
    return 0 ;
}