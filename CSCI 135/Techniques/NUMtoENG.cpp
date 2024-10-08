#include <iostream>
#include <cmath>
using namespace std;


string digit_name(int digit){
    if(digit == 1) return "one";
    if(digit == 2) return "two";
    if(digit == 3) return "three";
    if(digit == 4) return "four";
    if(digit == 5) return "five";
    if(digit == 6) return "six";
    if(digit == 7) return "seven";
    if(digit == 8) return "eight";
    if(digit == 9) return "nine";
    return 0;;
}

string teens_name(int number){
    if(number == 10) return "ten";
    if(number == 11) return "eleven";
    if(number == 12) return "twelve";
    if(number == 13) return "thirteen";
    if(number == 14) return "fourteen";
    if(number == 15) return "fifteen";
    if(number == 16) return "sixteen";
    if(number == 17) return "seventeen";
    if(number == 18) return "eighteen";
    if(number == 19) return "nineteen";
    return 0;
}

string tens_name(int number){
    if(number >= 90) return "ninety";
    if(number >= 80) return "eighty";
    if(number >= 70) return "seventy";
    if(number >= 60) return "sixty";
    if(number >= 50) return "fifty";
    if(number >= 40) return "forty";
    if(number >= 30) return "thirty";
    if(number >= 20) return "twenty";
    return 0;
}

string int_name(int number){
    int part = number;
    string name = "";
    if(part == 1000){
        return ("one thousand");
    }
    if(part >= 100){
        name = digit_name(part/100) + " hundred";
        part = part % 100;
    }
    if(part >= 20){
        name = name + " " + tens_name(part);
        part = part % 10;
    }
    if(part >= 10){
        name = name + " " + teens_name(part);
        part = 0;
    }
    if(part > 0){
        name = name + " " + digit_name(part);
        part = 0;
    }
    return name;
}

int main(){
    cout << "Enter a valid positive integer between 1-1000: ";
    int input;
    cin >> input;
    cout << int_name(input);
    return 0;
}