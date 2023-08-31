#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// bubble sort using pointer
int *bubble(int *arr, int l)
{
    int j = 0;
    for (int i = 0; i < (l - 1);)
    {
        if (arr[i] <= arr[i + 1])
        {
            j++;
            i = j;
        }
        else
        {
            swap(arr[i], arr[i + 1]);
            i--;
        }
    }
    return arr;
}
// bubble sort using recurtion and vector
vector<int> bubble(vector<int> v, int i = 0, int j = 0)
{
    if(i==(v.size()-1))
    return v;
    
    if (v[i] <= v[i + 1])
        return bubble(v, j + 1, j + 1);
    else
    {
        swap(v[i], v[i + 1]);
        return bubble(v, i - 1, j);
    }
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
    p = bubble(n1, l);
    print(p, l);
    v=bubble(v);
    print(&v[0], v.size());
    return 0;
}

