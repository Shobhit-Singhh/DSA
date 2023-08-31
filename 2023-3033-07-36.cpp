#include <iostream>
#include <stdlib.h>
using namespace std;
// print the element of the array which is greatest then all the element right to it
int main()
{   
    system("clear");
    
    int n, x;
    cout << "enter the array length\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";
    
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    
    
    cout << "\n\n array :--\n";
    for (int i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    
    int count = arr[n - 1];
    cout << endl << "|" << count << "|";
    
    
    
        for (int i = (n - 1); i >= 0; i--)
    {
        if (count < arr[i])
        {
            count = arr[i];
            cout << "|" << count;
        }
    }
    
    return 0;
}
