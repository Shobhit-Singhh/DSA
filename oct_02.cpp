#include <iostream>
#include <stdlib.h>
using namespace std;

int T_factorial(int n, int k = 1)
{
    if (n < 1)
        return k;
    return T_factorial(n - 1, n * k);
}

int main()
{
    int n;
    cout<<"enter the number for factorial\n";
    cin>>n;
    cout<< T_factorial(n);
    return 0;
}
