#include <iostream>
#include <stdlib.h>
using namespace std;
// which entery in the array is not in pair

int one_odd_occuring(int arr[], int n, int i = 1)
{
    if (n <= 1)
        return arr[0];
    arr[0] = arr[0] ^ arr[i];
    return one_odd_occuring(arr, n - 1, i + 1);
}

int main()
{
    system("clear");
    int l;
    cout << "enter the length of array\n";
    cin >> l;
    int n1[l];
    cout << "enter the array\n";
    for (int i = 0; i < l; i++)
        cin >> n1[i];
    cout << one_odd_occuring(n1,l);
    return 0;
}

