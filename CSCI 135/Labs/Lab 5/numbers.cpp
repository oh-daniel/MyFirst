/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 5 Task A / B / C / D / E / F / G
This program defines a function that determines whether n is divisible by d,
as well as a function that determines whether a number is prime,
as well a function that returns the next smallest prime,
as well as a function that returns the number of prime numbers in the
interval a <= x <= b.
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){
    if(d == 0){
        return false;
    }
    else if(n % d == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isPrime(int n){
    for(int i = 2; i <= (n - 1); i++){
        if(n % i == 0){
            return false;
        }
    }
    if(n < 2){
        return false;
    }
    else{
        return true;
    }
}


int nextPrime(int n){
    for(int i = (n + 1); i <= 100000000; i++){
        if(isPrime(i) == true){
            return i;
        }
    }
    return 0;
}

int countPrimes(int a, int b){
    int counter = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i) == true){
            counter = counter + 1;  
        }
    }
    return counter;
}

bool isTwinPrime(int n){
    if(!isPrime(n)){ // n may not be prime
        return false;
    }
    else if(isPrime(n + 2) || isPrime(n - 2)){
        return true;
    }
    else{
        return false;
    }
}

int nextTwinPrime(int n){
    for(int i = (n + 1); i < 100000000; i++){
        if(isTwinPrime(i) == true){
            return i;
        }
    }
    return 0;
}

int largestTwinPrime(int a, int b){
    for(int i = b; i >= a; i--){
        if(isTwinPrime(i)){
            return i;
        }
    }
    return -1;
}

int main(){
    int num_1, num_2, counter;
    cout << "Enter a lower bound: ";
    cin >> num_1;
    cout << "Enter an upper bound: ";
    cin >> num_2;
    int testp = largestTwinPrime(num_1, num_2);
    cout << testp;
    return 0;
}

