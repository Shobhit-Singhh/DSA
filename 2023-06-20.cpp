#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
// Print a Matrix in spiral Pattern
void print_snake(int arr[4][4])
{
    int top = 0, bottom = 3, left = 0, right = 3, i, j;
     while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
            cout << arr[i][j] << " ";
        top += 1;
        j=right;
        for (int i = top ; i <= bottom; i++)
            cout << arr[i][j] << " ";
        right -= 1;
        i=bottom;
        for (int j = right ; j >= left; j--)
            cout << arr[i][j] << " ";
        bottom -= 1;
        j=left;
        for (int i = bottom ; i >= top; i--)
            cout << arr[i][j] << " ";
        left += 1;
        i=top;
    }
}
int main()
{
    system("clear");

    int arr[4][4] = {1, 2, 3, 4,
                     5, 6, 7, 8,
                     9, 10, 11, 12,
                     13, 14, 15, 16};
    print_snake(arr);
    return 0;
}
