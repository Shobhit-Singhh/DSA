#include <iostream>
#include <stdlib.h>
using namespace std;
//maximum length of even-odd sub array

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
    int current = 1;

    for (int i = 0; i < (n-1); i++)
    {
        
        if ((arr[i] + arr[i + 1]) % 2 != 0)
        {
            current = current + 1;
            if (current > x)
                x = current;
        }

        else
            current = 1;
    }


    

    cout << "\n\n max length of even odd sub array is :- " << current;
    return 0;
}
