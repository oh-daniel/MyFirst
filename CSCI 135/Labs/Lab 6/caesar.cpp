/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 6 Task B
This program asks the user to input a plaintext sentence, then implements
a Caesar cipher encryption function to report the ciphertext.
*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

char shiftChar(char c, int rshift){ // shift one character by rshift
    if(int(c) >= 65 && int(c) <= 90){
        c += rshift;
        if(c > 90){
            c -= 26;
            return c;
        }
    }
    else if(int(c) >= 97 && int(c) <= 122){
        int wrap = int(c) + rshift;
        if(wrap > 122){
            wrap -= 26;
            c = wrap;
            return c;
        }
        c = wrap;

    }
    return c;
}

string encryptCaesar(string plaintext, int rshift){ // caesar cipher encryption
    char c;
    for(int i = 0; i < plaintext.size(); i++){
        c = plaintext[i]; // make every character in plaintext a char c
        plaintext[i] = shiftChar(c, rshift);
    }
    return plaintext;
}

int main(){
    string plaintext;
    int rshift;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << "Enter shift: ";
    cin >> rshift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, rshift);
    return 0;   
}

/* program asks for a plaintext, and an amount to shift (1-25) and we first put it through the 
encryptCaesar function, where the plaintext and rshift amount is taken and for each character in the plaintext
that character is subject to the shiftChar function, in which each character is then shifted by the amount
specified by the user(also accounting for if the letter will wrap around due to the rshift). 
We look back to the encryptCaesar, where the loop is forming a char for each repetition and the collection
of those chars is forming the plaintext (process of ciphertext) to finally return it. We then output.
*/ 
