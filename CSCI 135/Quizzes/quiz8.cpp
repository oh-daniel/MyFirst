//Daniel Oh Quiz 8

#include <iostream>
using namespace std;



int unbalanced_brackets(string line){
    int closed = 0;
    int open = 0;
    for(int i = 0; i < line.size(); i++){
        if(line[i] == '{'){
            open ++;
        }
        else if(line[i] == '}'){
            closed ++;
        }
    }
    return open - closed;
}

int main(){
    string line = "{}}}";
    cout << unbalanced_brackets(line);
    return 0;
}