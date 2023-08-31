#include <iostream>
#include <stdlib.h>
using namespace std;
// calculating power function
// introduction of binary execution
// time complexity log(power) 
int computing_power(long n, long p)
{
    if (p == 1)
        return n;
    if (p == 0)
        return 1;
    if (p % 2 == 0)
        n = computing_power(n * n, p / 2);
    else
        n = n * computing_power(n * n, (p - 1) / 2);
    return n;
}

int main()
{
    system("clear");
    int n1,n2;
    cout << "enter the numbers\n";
    cin >> n1;
    cout << "enter the power\n";
    cin >> n2;
    cout<<computing_power(n1,n2);
    return 0;
}
