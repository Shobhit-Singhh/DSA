#include <iostream>
#include <stdlib.h>
using namespace std;

//Check for Anagram

int main()
{
    system("clear");

    string str1, str2;
    int arr[26]={0},f=0;
    cout << "enter the string\n";
    cin >> str1;
    cout << "enter the string\n";
    cin >> str2;
    
    for (int i = 0; i < str1.length(); i++)
    {
        arr[str1[i]-'a']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        arr[str2[i]-'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]!=0)
        {cout<<"not a Anagram pair";
            f++;
            break;}
        
    }
    
        if(f==0)
        {
            cout<<" Anagram pair";
        }
    return 0;
}
