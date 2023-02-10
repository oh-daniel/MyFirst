//Daniel Oh Quiz 10

#include <iostream>
#include <string>
using namespace std;

class Date{
public:
    int month;
    int day;
    int year;
};

string formatDate(Date * d){
    int month, day, year;
    string new_date;
    if(d->month == 1){
        return "Jan " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 2){
        return "Feb " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 3){
        return "Mar " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 4){
        return "Apr " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 5){
        return "May " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 6){
        return "Jun " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 7){
        return "Jul " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 8){
        return "Aug " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 9){
        return "Sep " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 10){
        return "Oct " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 11){
        return "Nov " + to_string(d->day) + ", " + to_string(d->year);
    }
    else if(d->month == 12){
        return "Dec " + to_string(d->day) + ", " + to_string(d->year);
    }
    return 0;
}


int main(){
    Date midterm1 = Date {10, 17, 2022};
    cout << formatDate(&midterm1) << endl;

    Date christmas = Date {12, 25, 2022};
    cout << formatDate(&christmas) << endl;

    Date Newyears = Date {1, 1, 2022};
    cout <<formatDate(&Newyears) << endl;
    return 0;
}

