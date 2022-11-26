#include <iostream>
#include <stdlib.h>
using namespace std;

// Leftmost non Repeating Character

int main()
{
    system("clear");

    string str1;
    int arr[26] = {0}, f = 26, p = -1;
    cout << "enter the string\n";
    cin >> str1;

    for (int i = 0; i < str1.length(); i++)
    {
        if (arr[str1[i] - 'a'] == 0)
        {
            cout << "storing " << str1[i] << " to array[" << (str1[i] - 'a') << "]\n";

            arr[str1[i] - 'a'] = (i + 1);
        }
        else if (arr[str1[i] - 'a'] > 0)
        {
            cout << "updating " << str1[i] << " and array contains " << (arr[str1[i] - 'a'] - 2 * arr[str1[i] - 'a']) << endl;

            arr[str1[i] - 'a'] = arr[str1[i] - 'a'] - 2 * arr[str1[i] - 'a'];
        }
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << "|";
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0 && arr[i] < f)
        {
            cout << "the highest negative value till now is " << arr[i] << endl;

            f = arr[i];
            p = i;
        }
    }
    if (p == -1)
        cout << "nothing is repeated";
    else
        cout << "Leftmost Repeating Character is " << char(p + 'a');
    return 0;
}
