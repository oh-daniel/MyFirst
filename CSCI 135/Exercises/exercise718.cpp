/*
Daniel Oh
CSCI 135
Gennady Maryash
Exercise 7.18
This program computes the perimeter of a triangle.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    double x;
    double y;
};

struct Triangle{
    Point a;
    Point b;
    Point c;
};


double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); //distance formula: (x2 - x1)^2 + (y2 - y1)^2, take the sqrt of that
}

double perimeter(Triangle triangle){
    return distance(triangle.a, triangle.b) + distance(triangle.a, triangle.c) + distance(triangle.b, triangle.c);
}



int main(){
    Point point_1, point_2, point_3;
    Triangle triangle;
    triangle.a = point_1;
    triangle.b = point_2;
    triangle.c = point_3;
    cout << "Enter the x of point 1: ";
    cin >> point_1.x;
    cout << "Enter the y of point 1: ";
    cin >> point_1.y;
    cout << "Enter the x of point 2: ";
    cin >> point_2.x;
    cout << "Enter the y of point 2: ";
    cin >> point_2.y;
    cout << "Enter the x of point 3: ";
    cin >> point_3.x;
    cout << "Enter the y of point 3: ";
    cin >> point_3.y;
    
    cout << "The perimeter of the triangle is: " << perimeter(triangle) << endl;
    return 0;
}
