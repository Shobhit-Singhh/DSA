#include <iostream>
#include <stdlib.h>
using namespace std;
//trapping wain water
int main()
{
    system("clear");

    int n, x = 0;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n], larr[n], rarr[n];
    cout << "enter the array\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
        cout << "|" << arr[i];

    int count = arr[0];
    larr[0] = arr[0];

    for (int i = 1; i <= (n - 1); i++)
    {
        if (arr[i] > count)
        {
            larr[i] = arr[i];
            count = arr[i];
        }
        else
            larr[i] = count;
    }

    count = arr[n - 1];

    rarr[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        if (arr[i] > count)
        {
            rarr[i] = arr[i];
            count = arr[i];
        }
        else
            rarr[i] = count;

    cout << "\n\n left highest array :--\n";
    for (int i = 0; i < n; i++)
        cout << "|" << larr[i];

    cout << "\n\n right highest array :--\n";
    for (int i = 0; i < n; i++)
        cout << "|" << rarr[i];

    int unit = 0;

    for (int i = 1; i < n - 2; i++)
    {
        unit = unit + min(larr[i], rarr[i]) - arr[i];
    }

    cout<<"\n\nuint of water stored = "<<unit;

    return 0;
}
