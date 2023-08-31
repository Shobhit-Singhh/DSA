#include <iostream>
#include <stdlib.h>
using namespace std;
// find the greatest by linear search
int main()
{
    system("clear");

    int n, x, p, f,r;
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
    f = arr[0];
    for (int i = 0; i < n; i++)
        if (f < arr[i])
        f = arr[i];

        
    cout << "\n"<<f;
   
    return 0;
}
