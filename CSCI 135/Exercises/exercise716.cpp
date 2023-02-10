/*
Daniel Oh
CSCI 135
Gennady Maryash
Exercise 7.16
This program reads the coordinates of points, calls 
our distance function, and displays the results*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    double x;
    double y;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); //distance formula: (x2 - x1)^2 + (y2 - y1)^2, take the sqrt of that
}

int main(){
    Point point_1, point_2;
    cout << "Enter the x of point 1: ";
    cin >> point_1.x;
    cout << "Enter the y of point 1: ";
    cin >> point_1.y;
    cout << "Enter the x of point 2: ";
    cin >> point_2.x;
    cout << "Enter the y of point 2: ";
    cin >> point_2.y;
    cout << "The distance between these points is: " << distance(point_1, point_2);
    return 0;
}

