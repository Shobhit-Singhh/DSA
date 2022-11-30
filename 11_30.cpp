
//leet_code
// 2108. Find First Palindromic String in the Array

//Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".
//A string is palindromic if it reads the same forward and backward.

class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    { string s="";
        for(int i=0;i<words.size();i++)
            {   int f=0;
                string s={words[i]};
                for(int j=0;j<=(s.length()-j);j++)
                    {
                        if(s[j]!=s[s.length()-j-1])
                           { 
                               f++;
                               break;
                           }
                        
                    }
                if(f==0)
                    return s;
                   
            }
        return s;
    }
};
