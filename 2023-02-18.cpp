#include <iostream>
#include <stdlib.h>
using namespace std;
//array update
int main()
{
    system("clear");

    int n, x, p;
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

    cout << "\n\nenter the number you want to insert\n";
    cin >> p;
    cout << "enter the position";
    cin >> x;

    for (int i = n - 1; i > (x - 1); i--)
        arr[i] = arr[i - 1];
    arr[x - 1] = p;

    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    return 0;
}
