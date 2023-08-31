#include <iostream>
#include <stdlib.h>
using namespace std;
//LCM and GCD using tail recursion
int T_gcd(int a, int b)
{
    if (b == 0)
        return a;
    return T_gcd(min(a, b), abs(a - b));
}
int T_lcm(int a, int b)
{
    return (a * b / T_gcd(a, b));
}

int main()
{   system("clear");
    int n1,n2;
    cout<<"enter the numbers\n";
    cin>>n1>>n2;
    cout<<"GCD:";
    cout<< T_gcd(n1,n2)<<endl;
    cout<<"LCM:";
    cout<< T_lcm(n1,n2)<<endl;
    return 0;
}
