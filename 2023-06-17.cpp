#include <iostream>
#include <stdlib.h>
using namespace std;
//Intersection of two Sorted Arrays
int main()
{
    int n1 = 5, n2 = 12;
    int Arr[] = {3, 5, 10, 10, 10, 15, 15, 18, 20, 20, 20, 20}, arr[] = {5, 10, 10, 15, 18};
    int j = 0, k = 0;
    system("clear");
    for (int i = 0; i < n1;)
    {
        if (arr[i] > Arr[j])
            j++;
        else if (arr[i] == Arr[j] && arr[k - 1] != Arr[j])
        {
            arr[k] = Arr[j];
            k++;
            i++;
            j++;
        }
        else
            i++;
    }
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << "|";
    }
    return 0;
}

