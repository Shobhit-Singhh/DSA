#include <iostream>
#include <stdlib.h>
using namespace std;
//print the max value of arr[j]-arr[i], where i<j
int main()
{
    system("clear");

    int n, x;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }

    int count = arr[1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        if (count < arr[i]-arr[i-1])
        {
            count = arr[i]-arr[i-1];
            
        }
    }
    cout << "\n" << count;

    return 0;
}

