#include <iostream>
#include <stdlib.h>
using namespace std;
//maximum consecutive 1s
int main()
{
    system("clear");

    int n, x = 0, y = 0;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
        cout << "|" << arr[i];
    for (int i = 0; i < (n - 1); i++)
    {
        if (arr[i] == 1 && arr[i + 1] != 1)
            x = 1;
        if (arr[i] == 1 && arr[i + 1] == 1)
        {
            x = x + 1;
            if (y < x)
                y = x;
        }
    }

    cout << "\n\nmax no of consecutive 1's " << y;
    return 0;
}
