#include <iostream>
#include <stdlib.h>
using namespace std;
// find the number of 1s in the given array

int binary_search(int arr[],int n,int fn, int in=0)
{
int i=(in+fn)/2;
if(arr[i]==0)
return binary_search(arr,n,fn,i+1);
if(arr[i-1]==0)
return i;
return binary_search(arr,n,i-1,in);
}

int main()
{
system("clear");
 int x, n;
    cout << "enter the length of the array\n";
    cin >> n;
    int arr[n];
    cout << "enter the array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cout << "|" << arr[i] << "|";
    cout << endl;
    cout << n-(binary_search(arr,n,n-1));
return 0;
}

