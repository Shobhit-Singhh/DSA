#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("clear");
    int n1 = 5, n2 = 8;
    int arr[] = {1, 2, 3, 3, 3}, Arr[] = {1, 2, 3, 4, 4, 5, 5, 6};
    int i = 0, j = 0;
    int l;

    while (i < n1 && j < n2)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] < Arr[j])
            {
                cout << arr[i] << "|";
                i++;
            }
        }
        else
            i++;
        if (Arr[j] != Arr[j - 1])
        {
            if (arr[i] > Arr[j])
            {
                cout << Arr[j] << "|";
                j++;
            }
        }
        else
            j++;

        if (arr[i] == Arr[j])
        {
            cout << Arr[j] << "|";
            j++;
            i++;
        }

    }

    while (i < n1)
    {
        if (arr[i - 1] == arr[i])
            i++;
        else
        {
            cout << arr[i] << "|";
            i++;
        }
    }

    while (j < n2)
    {
        if (Arr[j - 1] == Arr[j])
            j++;
        else
        {
            cout << Arr[j] << "|";
            j++;
        }
    }

    return 0;
}
