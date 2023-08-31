#include <iostream>
#include <stdlib.h>
using namespace std;
//max profit in buying and selling stock
int main()
{
    system("clear");

    int n, x = 0;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
        cout << "|" << arr[i];

    int count = arr[0];

    for (int i = 0; i < (n - 1); i++)
        if ((arr[i + 1] - arr[i]) > 0)
            x = x + (arr[i + 1] - arr[i]);

    cout << "\n profit = " << x;

    return 0;
}

