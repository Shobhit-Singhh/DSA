#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// selection sort using pointer
int *selection(int *arr, int l)
{
    int min;
    for (int i = 0; i < l; i++)
    {
        min = i;
        for (int j = i; j < l;j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
    return arr;
}

// selection sort using recurtion and vector
vector<int> selection(vector<int> v, int i = 0, int j = 0, int min = 0)
{
    if (i == v.size())
        return v;
    if (j < v.size())
    {
        if (v[j] < v[min])
            return selection(v, i, j + 1, j);
        else
            return selection(v, i, j + 1, min);
    }
    swap(v[i], v[min]);
    return selection(v, i + 1, i + 1, i + 1);
}

// print function
int print(int *p, int l)
{
    for (int i = 0; i < l; i++)
        cout << p[i] << "|";
    cout << endl;
    return 0;
}

int main()
{
    system("clear");
    int l;
    cout << "enter the length of array\n";
    cin >> l;
    int n1[l];
    cout << "enter the array\n";
    for (int i = 0; i < l; i++)
        cin >> n1[i];
    vector<int> v(n1, n1 + l);
    int *p = n1;
    print(p, l);
    p = selection(n1, l);
    print(p, l);
    v = selection(v);
    print(&v[0], v.size());
    return 0;
}

