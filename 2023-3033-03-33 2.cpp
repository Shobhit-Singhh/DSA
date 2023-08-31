//median
#include <iostream>
#include <stdlib.h>
using namespace std;

int median(int arr[], int Arr[], int n1, int n2)
{
    int mid = ((n1 + n2) / 2)-1, p = 0, q = 0, a;

    if (!(mid & 1))
        a = 2;
    else
        a = 1;

    for (int i = 1; i < mid + a; i++)// sir ka solution alag h aur tumhsri complexity jada h
    
    {
        if (arr[p] < Arr[q])
        {
            cout << arr[p] << endl<<"------------------\n";
            p++;
        }
        else
        {
            cout << Arr[q] << endl<<"------------------\n";
            q++;
        }
        if (i >= mid)
        {
            if (arr[p] < Arr[q])
                cout << arr[p];
            else
                cout << Arr[q];
                cout<<endl;
        }
    }
    return 0;
}

int main()
{
    system("clear");
    int x, n1, n2;
    cout << "enter the length of the array 1\n";
    cin >> n1;
    cout << "enter the length of the array 2\n";
    cin >> n2;
    int arr[n1], Arr[n2];
    cout << "enter the array 1\n";
    for (int i = 0; i < n1; i++)
        cin >> arr[i];
    cout << "enter the array 2\n";
    for (int i = 0; i < n2; i++)
        cin >> Arr[i];
    for (int i = 0; i < n1; i++)
        cout << "|" << arr[i] << "|";
    cout << endl;
    cout << endl;
    for (int i = 0; i < n2; i++)
        cout << "|" << Arr[i] << "|";
    cout << endl;
    cout << endl;
    median(arr, Arr, n1, n2);
    return 0;
}
