#include <iostream>
#include <stdlib.h>
using namespace std;
//reversing a number
//T stands for tail recursion
int T_rev(int n, int count = 0)
{
    if (n == 0)
        return count;
    return T_rev(n / 10, count * 10 + (n % 10));
}

int main()
{
system("clear");
int n;
cout<<"enter the number";
cin>>n;         // user input
cout<<T_rev(n);
return 0;
}

