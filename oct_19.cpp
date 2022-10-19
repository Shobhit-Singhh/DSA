#include <iostream>
#include <stdlib.h>
using namespace std;
//delete and update array
int main()
{
    system("clear");

    int n, x, p, f;
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

    cout << "\n\nenter the number you want to delete\n";
    cin >> p;

    for (int i = 0; i < n; i++)
        if (p == arr[i] || f != 0)
        {
            f++;
            arr[i] = arr[i + 1];
        }

    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    return 0;
}
