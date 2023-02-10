/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 6 Task D
This program implements two decryption functions, to report a Caesar ciphertext, as well as a Vigenere
ciphertext, all based on user inputs.
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
        else if(c < 65){ // account for reverse
            c += 26;
            return c;
        }
    }
    else if(int(c) >= 97 && int(c) <= 122){
        int wrap = int(c) + rshift;
        if(wrap > 122){ //account for reverse
            wrap -= 26;
            c = wrap;
            return c;
        }
        else if(wrap < 97){
            wrap += 26;
            c = wrap;
            return c;
        }
        c = wrap;
        return c;
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

string decryptCaesar(string ciphertext, int rshift){ // caesar cipher encryption
    char c;
    for(int i = 0; i < ciphertext.size(); i++){
        c = ciphertext[i]; // make every character in plaintext a char c
        ciphertext[i] = shiftChar(c, rshift * (-1));
    }
    return ciphertext;
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

string decryptVigenere(string ciphertext, string keyword){ //keyword only contains lowercase alphabetic letters a-z
    char currentChar, currentKeywordChar;
    int keywordIndex, shift;

    for(int i = 0; i < ciphertext.size(); i++){ //for all letters in our plaintext message
        if(keywordIndex > keyword.size() - 1){ // cake = 4 - 1 = 3
            keywordIndex = 0; //0,1,2,3,0,1,2,3,...
        }
        currentChar = ciphertext[i]; //letters in the plaintext message
        currentKeywordChar = keyword[keywordIndex]; // keyword[0] = c / keyword[1] = a / keyword[2] = k / keyword[3] = e,
        shift = (int(currentKeywordChar) - 97); // shift = 99-97 / shift = 97-97 / shift = 107-97 / shift = 101-97
        shift = shift * (-1);
        if(isalpha(currentChar) == 0){
            ciphertext[i] = shiftChar(currentChar, 0); //if the current character is NOT an alphabetical (a-z),we shift nothing
        }
        else{
            ciphertext[i] = shiftChar(currentChar, shift); /*if it IS an alphabetical, we will subject that character to
            shiftChar function, with a shift of either 2, 0, 10, or 4*/ 
            keywordIndex++; //0,1,2,3,0,1,2,3,...
        }
    }
    return ciphertext; //the string plaintext comes back together to form the final encrypted ciphertext, which we then return.
}



int main(){
    string plaintext;
    int rshift;
    string keyword; // plaintext with r shift/ plaintext with keyword
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << "= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> rshift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, rshift) << endl;
    cout << "Decrypted: " << decryptCaesar(plaintext, rshift) << endl;
    cout << "= Vigenere = " << endl;
    cout << "Enter keyword: "; //keyword shift
    cin >> keyword;
    cout << "Ciphertext: " << encryptVigenere(plaintext, keyword) << endl;
    cout << "Decrypted: " << decryptVigenere(plaintext, keyword) << endl;
    return 0;
}
// noting that the outputs for decrypted portions are showing incorrectly
// this is noted as of 10/24 10PM
/*This program is a combination of the several previous tasks, we've added conditions
to account for reverse encryptions.
Our decryptions are reported as a result of applying decryptions functions, rather than just outputting
the original plaintext variable
The order in which the info is presented is following the guide on Lab 6 web*/
