#include <iostream>
#include <stdlib.h>
using namespace std;
// two pointer approch
// find if there is a pair with sum equal to input in a sorted array
int two_pointer(int arr[], int n, int x)
{
    int Arr[n];
    for (int i = 0; i < n; i++)
        Arr[i] = x - arr[i];
    int j = n;
    for (int i = 0; i < n && j > 0;)// sir ka approch bhi dekh lo
    {
        if (arr[i] == Arr[j])
        {
            cout << "yes";
            return 0;
        }
        else if (arr[i] < Arr[j])
            i++;
        else if (arr[i > Arr[j]])
            j--;
    }
    cout << "no";
}
int main()
{
    system("clear");
    int x, n;
    cout << "enter the length of the array\n";
    cin >> n;
    int arr[n], Arr[n];
    cout << "enter the array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << "|" << arr[i] << "|";
    cout << endl;
    cout << "enter the number\n";
    cin >> x;
    cout << endl;
    cout << endl;
    cout << two_pointer(arr, n, x);
    return 0;
}

