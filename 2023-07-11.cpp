#include <iostream>
#include <stdlib.h>
using namespace std;
// find the peak element
int peak(int arr[], int n, int i, int f)
{
    int mid = (i + f) / 2;
    if (arr[0] > arr[1])
        return arr[0];
    else if (arr[n] > arr[n - 1])
        return arr[n];
    else if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        return arr[mid];
    else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1])
        return peak(arr, n, mid, f);
    else
        return peak(arr, n, i, mid);
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
    cout << endl;
    cout << endl;
    cout << peak(arr, n, 0, n - 1);

    return 0;
}
