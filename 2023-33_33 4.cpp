#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
// Print a 90 degree rotated Matrix
void print_rotate(int arr[4][4])
{
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            swap(arr[i][j], arr[j][i]);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    cout<<"\n";
    cout<<"\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            swap(arr[i][j], arr[3 - i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
int main()
{
    system("clear");

    int arr[4][4] = {1, 2, 3, 4,
                     5, 6, 7, 8,
                     9, 10, 11, 12,
                     13, 14, 15, 16};
    print_rotate(arr);
    return 0;
}
