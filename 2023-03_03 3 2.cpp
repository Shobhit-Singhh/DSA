#include <iostream>
#include <stdlib.h>
using namespace std;
// binary search my way1
int binary_search(int arr[], int x, int fn, int in=0)
{

    int i = ((in + fn) / 2);
    
    if (arr[i] == x)
        return i;
    if (in >= fn)
        return -1;
    else if (arr[i] > x)
        return binary_search(arr, x, i - 1, in);
    else
        return binary_search(arr, x, fn, i + 1);
}

int main()
{
    system("clear");
    int x, n;
    cout << "enter the length of the array\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << "|" << arr[i] << "|";
    cout << endl;
    cout << "enter the number you want to search in the 
array\n";
    cin >> x;
    cout << binary_search(arr, x, n-1);
    return 0;
}


