#include <iostream>
#include <stdlib.h>
using namespace std;


//String is Subsequence or not

int main()
{
    system("clear");

    string str1, str2;
    cout << "enter the string\n";
    cin >> str1;
    cout << "enter the string\n";
    cin >> str2;
    int i = 0;
    for (int j = 0; j < str1.length(); j++)
    {
        cout << "compairing " << str1[j] << " with " << str2[i];
        if (str2[i] == str1[j])
        {
            cout << "----------> confirm ";
            i++;
        }
        cout << endl;
    }

    if (i == str2.length())
        cout << "String is Subsequence";
        else cout<<"String is not Subsequence";
    return 0;
}
