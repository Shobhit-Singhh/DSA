#include <iostream>
#include <stdlib.h>
using namespace std;
// find the kth bit of a number is set or not
//first method
void kth_bit_1(int n, int k)
{
    if ((n >> (k - 1)) % 2 == 0)
        cout << "no set";
    else
        cout << "set";
}

//second method
void kth_bit_2(int n, int k)
{
    if (((n >> (k - 1)) & 1) == 1)
        cout << "set";
    else
        cout << "not set";
}

//third method
void kth_bit_3(int n, int k)
{
    if ((n & (1 << (k - 1))) != 0)
        cout << "set";
    else
        cout << "not set";
}


int main()
{
    system("clear");
    int n1, n2;
    cout << "enter the numbers\n";
    cin >> n1;
    cout << "enter the kth bit you want to check\n";
    cin >> n2;
    kth_bit_1(n1, n2);  //use any function 1,2,3
    return 0;
}
