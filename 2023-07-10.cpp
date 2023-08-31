#include <iostream>
#include <stdlib.h>
using namespace std;
// calculating sum of all digit of a number
int sum_of_digits(int n, int m = 0)
{
    if (n <= 0)
        return m;
    return sum_of_digits(n / 10, (m + (n % 10)));
}

int main()
{
    system("clear");
    int n1;
    cout << "enter the numbers\n";
    cin >> n1;
    cout << sum_of_digits(n1);
    return 0;
}
