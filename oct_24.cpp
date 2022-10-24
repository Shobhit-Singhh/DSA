#include <iostream>
#include <stdlib.h>
using namespace std;
//remove the duplicate entery
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

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }
    cout << "\n\n updated array:--  \n";
    for (int i = 0; i < k; i++)
    {
        cout << "|" << arr[i];
    }
    return 0;
}

