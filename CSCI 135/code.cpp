

#include <iostream>
#include <string>
using namespace std;


void reverse_in_place(string& s)
{
 char tmp;
 for(int i = 0; i < s.length()/2; i++)
 {
 tmp = s[i];
 s[i] = s[s.length() - i - 1];
 s[s.length() - i - 1] = tmp;
 }
 cout << s;
 cout << endl;
}

int main(){
    string s = "Hello I am me";
    reverse_in_place(s);
}
