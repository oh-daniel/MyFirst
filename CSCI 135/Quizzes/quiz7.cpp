//Daniel Oh Quiz 8
#include <iostream>
#include <string>
using namespace std;

void remove_e(string& sentence){
    string new_word = "";
    for(int i = 0; i < sentence.size(); i++){
        if(sentence.substr(i, 1) != "e") {
            new_word = new_word + sentence.substr(i, 1);
        }
    }
    sentence = new_word; // assign the new word to the variable
}

int main(){
    string s = "elephant";
    remove_e(s);
    cout << s << endl;
}

