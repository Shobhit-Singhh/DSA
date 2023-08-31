#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
// Print a Matrix transpose
void print_transpose(int arr[4][4])
{
    for (int i = 0; i <= 3; i++)
        for (int j = i; j <= 3; j++)
            swap(arr[i][j], arr[j][i]);
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
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
    print_transpose(arr);
    return 0;
}

