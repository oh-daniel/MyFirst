/*
Daniel Oh
Genady Maryash
CSCI 135
Exercise 9.5
This program implements a class Rectangle. Provides a constructor to construct a rectangle with a
given width and height, member functions get_perimeter and get_area that compute
the perimeter and area, and a member function void resize(double factor) that resizes
the rectangle by multiplying the width and height by the given factor.
*/

#include <iostream>
using namespace std;


class Rectangle {
private:
	double width;
	double height;
public:
	Rectangle(double input_w, double input_h){
        width = input_w;
        height = input_h;
    }
	double get_perimeter(){
        return 2 * (width + height);
        }
	double get_area(){
        return (width * height);
    }
	void resize(double factor){
        width = width * factor;
        height = height * factor;
    }
	
};

