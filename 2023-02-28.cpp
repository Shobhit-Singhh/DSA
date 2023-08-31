#include <iostream>
#include <stdlib.h>
using namespace std;
// print the frequency of element in array
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

    for (int i = 0; i <= n; i++) // dhyan se socho "i<=n" q use hua h "i<n" ki jagah pe
        if (count == arr[i])
            x++;
        else if (count != arr[i])
        {
            cout << endl
                 << count << "-" << x;
            count = arr[i];
            x = 1;
        }
        else
        {
            cout << endl
                 << count << "-" << 1;
            x = 1;
        }

    return 0;
}

