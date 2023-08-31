#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
//Print a Matrix in Snake Pattern
void print_snake(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if ((!(i & 1)))
        {
            for (int j = 0; j < 3; j++)
                cout << arr[i][j] << " ";
        }
        else
        {int j=2;
            for(int j=2;j>=0;j--)
            {
                cout << arr[i][j] << " ";
                j--;
            }
        }
        
    }
}
int main()
{
    system("clear");

    int arr[3][3] ={1, 2, 3,
                    4, 5, 6,
                    7, 8, 9};
    print_snake(arr);
    return 0;
}
