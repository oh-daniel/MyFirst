/*
Daniel Oh
Gennadiy Maryash
CSCI 135
Exercise 7.1
This functions receives two pointers and sorts the values to which they point.
*/

#include <iostream>
using namespace std;



void sort2(double* p, double* q){
    double fill;
    if(*p > *q){
        fill = *p;
        *p = *q;
        *q = fill;
    }
}

int main(){

double x = 100;
double y = 50;
sort2(&x, &y);
cout << "x = " << x << endl;
cout << "y = " << y << endl;
return 0;

}
