/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 6 Task C
This program contains a function that implements a Vigenere cipher encryption
*/

#include <iostream>
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

string encryptVigenere(string plaintext, string keyword){ //keyword only contains lowercase alphabetic letters a-z
    char currentChar, currentKeywordChar;
    int keywordIndex, shift;
    for(int i = 0; i < plaintext.size(); i++){ //for all letters in our plaintext message
        if(keywordIndex > keyword.size() - 1){ // cake = 4 - 1 = 3
            keywordIndex = 0; //0,1,2,3,0,1,2,3,...
        }
        currentChar = plaintext[i]; //letters in the plaintext message
        currentKeywordChar = keyword[keywordIndex]; // keyword[0] = c / keyword[1] = a / keyword[2] = k / keyword[3] = e,
        shift = (int(currentKeywordChar) - 97); // shift = 99-97 / shift = 97-97 / shift = 107-97 / shift = 101-97

        if(isalpha(currentChar) == 0){
            plaintext[i] = shiftChar(currentChar, 0); //if the current character is NOT an alphabetical (a-z),we shift nothing
        }
        else{
            plaintext[i] = shiftChar(currentChar, shift); /*if it IS an alphabetical, we will subject that character to
            shiftChar function, with a shift of either 2, 0, 10, or 4*/ 
            keywordIndex++; //0,1,2,3,0,1,2,3,...
        }
    }
    return plaintext; //the string plaintext comes back together to form the final encrypted ciphertext, which we then return.
}

int main(){
    string plaintext, shift;
    cout << "Enter a plaintext: ";
    getline(cin, plaintext);
    cout << "Enter keyword: ";
    cin >> shift;
    cout << "Ciphertext: " << encryptVigenere(plaintext, shift);
    return 0;
}

/* This program builds upon the shiftChar function we've created in the previous program. In short, this
program asks the user for a plaintext, as well as a keyword (which is our shift). This procs the
encryptVigenere function, which takes our plaintext and keyword strings. For each character in out plaintext
if the position of keyword is greater than the size of the keyword - 1, we turn the index back to 0. So when
keyword = cake, if the index gets to 4, it gets turned back to 0. This is important because it lets us repeat
the pattern of shifting for each positional chracter in our keyword. So now, we have the current character
for each character in plaintext. Still in the for loop, we assign each keyword letter to currentKeywordChar.
The shift is created by finding the ASCII value of each currentKeywordChar - 97. For instance,
c has an ASCII value of 99 so by subtracting it by 97 will give us 2, which is its index in cake. (a = 0,
b = 1, c = 2). This will occur for each character in plaintext. Still in the for loop, we are checking that
each currentChar is alphabetical (a-z) or we will not subject it to the shiftChar function. We are raising
the increment of keywordIndex by 1 so that we continuously raise the counter and fulfill the process with
the specified keyword (cake).
*/