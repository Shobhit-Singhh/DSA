#include <iostream>
#include <stdlib.h>
using namespace std;
//min sum of sub array
int main()
{
    system("clear");

    int n;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n\n array :--\n";

    for (int i = 0; i < n; i++)
        cout << "|" << arr[i];
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        current = current + arr[i];
        if (current < arr[i])
            arr[i] = current;
        else
            current = arr[i];
    }

    current = 0;
    cout << "\n\n updated array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
        if (current > arr[i])
            current = arr[i];
    }

    cout << "\n\n min sum of sub array :- " << current;
    return 0;
}

