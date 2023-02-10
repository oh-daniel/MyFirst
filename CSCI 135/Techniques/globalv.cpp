#include <iostream>
using namespace std;
int p;
int contribute(int f)
{
if (f != 0) 
    { p = p * f; }
    return p;
}
int main()
{
int n = 2;
p = n;
n = contribute(n);
contribute(p);
cout << n << " " << p << endl;
return 0;
} 
