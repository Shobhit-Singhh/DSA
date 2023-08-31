#include <iostream>
#include <stdlib.h>
using namespace std;
// pelindrome check with tail recursion and time complexity O(n/2)
int T_pelindrome(int n, int p = 0)
{
    int t = n % 10;
    if (n > p)
    {
        n = n / 10;
        if (n == p)
            return 1;
        p = p * 10 + t;
        if (n == p)
            return 1;
        return T_pelindrome(n, p);
    }
    else
        return 0;
}

int main()
{
    system("clear");
    int n1;
    cout << "enter the numbers\n";
    cin >> n1;

    if (1 & T_pelindrome(n1))
        cout << n1 << " is a pelindrome number";
    else
        cout << n1 << " is not a pelindrome number";

    return 0;
}

