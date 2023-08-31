#include <iostream>
#include <stdlib.h>
using namespace std;
// count the number of set bits

//method 1
int count_set_bit_1(int n, int k = 0)
{
    if (n <= 0)
        return k;
    if (n % 2 != 0)
        k++;
    return count_set_bit_1((n >> 1), k);
}

//method 2
int count_set_bit_2(int n, int k = 0)
{
    if (n <= 0)
        return k;
    k++;
    return count_set_bit_2(n & (n - 1), k);
}

int main()
{
    system("clear");
    int n1, n2;
    cout << "enter the numbers\n";
    cin >> n1;
    cout<<count_set_bit_1(n1);
    return 0;
}

