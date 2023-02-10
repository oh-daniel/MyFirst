/*
Daniel Oh
Genady Maryash
LAB 2B
This program asks the user for a lower and upper limit,
then prints out all the integers from that interval.
*/

#include <iostream>
using namespace std;

int main(){
    int L, U; //Lower and upper limits
    cout << "Please enter L: ";
    cin >> L;
    cout << "Please enter U: ";
    cin >> U;
    for(int i = L; i < U; i++){ //Basic for loop, start from L, go to U, increment by 1.
        cout << i << " " << endl;
    }
    return 0;
}  