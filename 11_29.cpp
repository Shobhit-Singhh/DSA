#include <iostream>
#include <stdlib.h>
using namespace std;

//reversing words in the string

int main()
{
    system("clear");
    string str ;
    cout<<"enter the string\n";
    getline(cin,str);
    int j = 0, i = 0, p = 0;
    int start = 0;
    for (; i <= str.length(); i++)
    { 
        p=i;
        if (str[i] == ' '||i==str.length())
        {   i--;
            while (j <= i)
            {
                swap(str[j], str[i]);
                j++;
                i--;
            }
            i = p;
            j = p+1;
        }
    }
for(int i=str.length();i>=0;i--)
    cout<<str[i];

return 0;
}
