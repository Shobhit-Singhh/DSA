#include <iostream>
#include <stdlib.h>
using namespace std;
//binary search my way2
int binary_search(int arr[], int n,int x)
{
    int in = 0, fn = (n - 1), i;
    for (i = ((in + fn) / 2);in<=fn;i = ((in + fn) / 2))
    {
        if (arr[i] == x)
            return i;
        else if (arr[i] > x)
            fn = i - 1;
        else
            in = i + 1;
    }
    return -1;
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
    cout << binary_search(arr, n,x);
    return 0;
}


