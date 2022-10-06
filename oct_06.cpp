#include <iostream>
#include <stdlib.h>
using namespace std;
// check prime with time complexity O(root(n))
int T_prime(int n, int i = 2)
{
    if (n <= 1)
        return 0;
    if (n <= i * i)
        return 1;
    if (n % i == 0)
        return 0;
    return T_prime(n, i + 1);
}

int main()
{
    system("clear");
    int n1;
    cout << "enter the numbers\n";
    cin >> n1;

    if (1 & T_prime(n1))
        cout << n1 << " is a prime number";
    else
        cout << n1 << " is not a prime number";

    return 0;
}

