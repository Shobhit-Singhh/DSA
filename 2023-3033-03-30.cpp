//O(Log n) approach to search an element in a sorted and rotated array.
#include <iostream>
#include <stdlib.h>
using namespace std;
int binary_search(int arr[], int x, int first, int last)
{
    int mid = (first + last) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return binary_search(arr, x, mid + 1, last);
    else
        return binary_search(arr, x, first - 1, mid);
}

int rotate(int arr[], int x, int first, int last)
{
    int mid = (first + last) / 2;
    if (arr[first] == x)
        return first;
    if (arr[mid] == x)
        return mid;
    if (arr[last] == x)
        return last;
    if (arr[first] < arr[mid])
    {
        if (x > arr[first] && x < arr[mid])
            return binary_search(arr, x, first, mid);
        else
            return rotate(arr, x, mid, last);
    }
    if (arr[mid] < arr[last])
    {
        if (arr[mid] < x && x < arr[last])
            return binary_search(arr, x, mid, last);
        else
            return rotate(arr, x, first, mid);
    }
    return 0;
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
    cout << "enter the number you want to search in the array\n";
    cin >> x;
    cout << rotate(arr, x, 0, n - 1);
 
    return 0;
}
