#include <iostream>
#include <stdlib.h>
using namespace std;
// find the entered array is sorted or not
int main()
{
    system("clear");

    int n, x, p, f = 0;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
        {
            cout << "\nnot shorted";
            f++;
        }

    if (f == 0)
        cout << "\nshorted array";
    return 0;
}
