#include <iostream>
#include <stdlib.h>
using namespace std;
//reversed array
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

    f = n-1;
    for (int i = 0; i < f; i++, f--)
    {
        p = arr[i];
        arr[i] = arr[f];
        arr[f] = p;
    }
cout<<"\n\n reversed array:--  ";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    return 0;
}
