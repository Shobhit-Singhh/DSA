#include <iostream>
#include <stdlib.h>
using namespace std;
//Given an integer, we need to find floor of its square 
root in integer 

int sqrt(int n, int f, int i = 0)
{
    cout << "-------------------\n";
    int x = (f + i) / 2;
    if (x * x > n)
    {
        cout << "condition 1\n";
        cout << "f=" << f << "\n";
        cout << "i=" << i << "\n";
        cout << "x=" << x << "\n";
        return sqrt(n, x);
    }
    else if (x * x < n && (x + 1) * (x + 1) > n)
    {
        cout << "condition 2\n";
        cout << "f=" << f << "\n";
        cout << "i=" << i << "\n";
        cout << "x=" << x << "\n";
        return x;
    }
    else  if (x * x < n && (x + 1) * (x + 1) < n)
    {
        cout << "condition 3\n";
        cout << "f=" << f << "\n";
        cout << "i=" << i << "\n";
        cout << "x=" << x << "\n";
        return sqrt(n, f, x);
    }
    return 0 ;
}

int main()
{
    system("clear");
    int n;
    cout << "enter the number\n";
    cin >> n;
    // cout<<"sqrt= ";
    cout << sqrt(n, n);
    return 0;
}

