/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 10 Task A
This program implements simple functions for time
*/

#include <iostream>
using namespace std;

class Time {
    public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time){
    return ((time.h*60) + time.m );
}
int minutesUntil(Time earlier, Time later){
    return (((later.h - earlier.h) * 60) + (later.m - earlier.m));
}

int main(){
    Time time1, time2;
    cout << "Enter first time: ";
    cin >> time1.h >> time1.m;
    cout << "Enter second time: ";
    cin >> time2.h >> time2.m;
    cout << "These moments of time are " << minutesSinceMidnight(time1) << " and " << minutesSinceMidnight(time2) << " minutes after midnight." << endl;
    cout << "The interval between them is " << minutesUntil(time1, time2) << " minutes." << endl;
    return 0;
}
//military time
//provided class Time, it's copied from the lab web.