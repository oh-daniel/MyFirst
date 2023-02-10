/*
Damiel Oh
CSCI 135
Genady Maryash
Exercise 5.14
This program has a function that swaps two arguments to arrange them in sorted order.
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
    if(a > b){
        int swap;
        swap = b;
        b = a;
        a = swap;
    }
}

void sort3(int& a, int& b, int& c){
    sort2 (a, b);
    sort2 (a, c);
    sort2 (b, c);
}


int main(){
    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
}
