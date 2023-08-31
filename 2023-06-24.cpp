#include <iostream>
#include <stdlib.h>
using namespace std;

// palindrome check in string

int main()
{
    system("clear");

    string str;
    cout << "enter the string\n";
    cin >> str;
    int j = str.length() - 1, i = 0, f = 0;
    for (; i < str.length() / 2;)
    {
        if (str[i] != str[j])
        {
            f++;
            break;
        }
        i++;
        j--;
    }
    if (f > 0)
        cout << "not a palindrome";
    else
        cout << "palindrome";

    return 0;
}
