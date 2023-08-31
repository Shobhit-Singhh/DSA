#include <iostream>
#include <stdlib.h>
using namespace std;
//find the smallest by linear search
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

    p = arr[0];
    for (int i = 0; i < n; i++)
        if (p < arr[i])
        {
            f = p;
            p = arr[i];
        }


    cout << "\n"<<f;

    return 0;
}
