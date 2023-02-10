/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 10 Task E
This program continues upon the other tasks, it returns a true or false depending on if
two time slots overlap

*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Time {
    public:
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie {
    public:
    string title;
    Genre genre;
    int duration;

};

class TimeSlot {
    public:
    Movie movie;
    Time startTime;
};



void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}



Time addMinutes(Time time0, int min){
    while(min >= 60){
        min = min - 60;
        time0.h = time0.h + 1;
    }
    time0.m = time0.m + min;
    if(time0.m >= 60){
        time0.m = time0.m - 60;
        time0.h = time0.h + 1;
    }
    return time0;
}

int minutesSinceMidnight(Time time){
    return ((time.h*60) + time.m );
}
int minutesUntil(Time earlier, Time later){
    return (((later.h - earlier.h) * 60) + (later.m - earlier.m));
}

void printTime(Time time){
    cout << time.h << ":" << time.m;
}

void printTimeSlot(TimeSlot ts){
    printMovie(ts.movie);
    cout << " [starts at ";
    printTime(ts.startTime);
    cout << ", ends by ";
    printTime(addMinutes(ts.startTime, ts.movie.duration));
    cout << "]" << endl;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot next;
    next.movie = nextMovie;
    next.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return next;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    int interval = minutesUntil(ts1.startTime, ts2.startTime); //-120
    if(interval <= 0){ //ts2 is earlier
        if(ts2.movie.duration > abs(interval)){
            return true;
        }
        else{
            return false;
        }   
    }
    else if(interval > 0){ //ts2 is later
        if(ts1.movie.duration > interval){
            return true;
        }
        else{
            return false;
        }
    }
    return 0;
}

int main(){
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    TimeSlot morning = {movie1,{9, 15}};
    TimeSlot daytime = {movie2,{12, 15}};
    TimeSlot evening = {movie2,{16, 45}};
    Movie movie3 = {"Fake Movie", COMEDY, 120};
    TimeSlot ts1 = {movie3, {14, 10}};
    printTimeSlot(ts1);
    TimeSlot ts2 = scheduleAfter(ts1, movie3);
    cout << "Next starts: ";
    printTime(ts2.startTime);
    return 0;
}
//military time
//provided class Time, it's copied from the lab web.
//class enums
//this program assumes that our own time slots end before midnight
//haha comment
//and another one
//anotha one
////Hint: You may use minutesUntil to check which time slot is earlier, 
//then find the how long is the interval between their starting times. 
//They overlap if the movie duration is greater than the interval between the time slots’ 
//starting times. Alternatively, converting times into minutes since midnight can be a good idea as well.

