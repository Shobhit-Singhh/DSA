#include <iostream>
#include <stdlib.h>
using namespace std;
// calculating binary of a number
int binary(int n)
{
    if (n == 0)
        return 0;
    return (n % 2 + 10 * binary(n / 2));
}
int main()
{
    system("clear");
    int n1;
    cout << "enter the numbers\n";
    cin >> n1;
    cout<<binary(n1);
    return 0;
}

