/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 2D
This program uses an array of integers to compute and
then print all Fibonacci numbers from F(0) to F(59)
*/

#include <iostream>
using namespace std;

int main(){
    int i;
    int fib[60]; //Make an array with 60 elements, 0-59
    fib[0] = 0; //"first" element is 0
    fib[1] = 1; //second element is 1
    cout << fib[0] << endl; //print them out
    cout << fib[1] << endl;
    for(int i = 2; i < 60; i++){ //start from third element, to 59, incrementing by 1
        fib[i] = fib[i-1] + fib[i-2]; 
        cout << fib[i] << endl; //The later numbers end up having too many digits for the program to display fully.
    }
    return 0;   
}