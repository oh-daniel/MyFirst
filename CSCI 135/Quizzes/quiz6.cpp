// Daniel Oh Quiz 6
#include <iostream>
using namespace std;

int max3(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    cout << max3(-5, 10, 15) << endl;
}
    
