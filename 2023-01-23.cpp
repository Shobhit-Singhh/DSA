#include <iostream>
#include <stdlib.h>
using namespace std;

// print the string in sorted manner after converting lower case to upper case

int main()
{
    system("clear");

    string str;
    int arr[26]={0};
    cout << "enter the string\n";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        arr[int(str[i]-'a')]++;
    }
    for(int i=0;i<26;)
    {
        if(arr[i]>0)
        {cout<<char(i+'a'-32)<<" ";
        arr[i]--;
        if(arr[i]==0)
        i++;
        }
        else i++;
    }

    return 0;
}
