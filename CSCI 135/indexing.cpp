#include <iostream>
#include <string>
using namespace std;


int main(){
    int height;
    cout << "Enter height: ";
    cin >> height;
    while(height <= 0){
        cout << "Enter a valid height: ";
        cin >> height;
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j <= height; j++){
            if(j < height - i){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
    cout << endl;
    }
        
    return 0;
}