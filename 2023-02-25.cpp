#include <iostream>
#include <stdlib.h>
using namespace std;
//storing all zeros at last
int main()
{
    system("clear");

    int n, x, k = 0;
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

    for (int i = 0; i < n || k != i; i++)
    {
        if (arr[i] != 0 && i < n)
        {
            arr[k] = arr[i];
            k++;
        }
        if (i > n)
        {
            i--;
            arr[k] = 0;
            k++;
        }
    }

    cout << "\n\n updated array:--  \n";
    for (int i = 0; i < (k-1); i++)
    {
        cout << "|" << arr[i];
    }
    return 0;
}
