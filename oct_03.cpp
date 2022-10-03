#include <iostream>
#include <stdlib.h>
using namespace std;
// no of trailing zero in a factorial 

int T_trailing_zero_factorial(int n, int f = 0)
{
    if (n < 5)
        return f ;
    if (n % 5 == 0)
        return T_trailing_zero_factorial(n/5, f + n/5);
}

int main()
{   system("clear");
    int n;
    cout<<"enter the number for factorial\n";
    cin>>n;
    cout<<"no of trailing zero is \n";
    cout<< T_trailing_zero_factorial(n);
    return 0;
}
