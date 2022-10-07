#include <iostream>
#include <stdlib.h>
using namespace std;
// to print all the factor of any number
// my best coding till now
// using head & tail recursion together 
// ignore the last "1"
int all_factors(int n, int i = 1)
{
    if (n <= i * i)
        return 0;
    if (n % i == 0)
        cout << i << endl;     //this will print the first half
    all_factors(n, i + 1);
    if (n % i == 0)
        cout << n / i << endl; //this will print the seconf half
}

int main()
{
    system("clear");
    int n1;
    cout << "enter the numbers\n";
    cin >> n1;
    cout<<all_factors(n1);
    return 0;
}

