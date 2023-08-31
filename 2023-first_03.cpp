//Given an integer n, return true if it is a power of four. Otherwise, return false.

//An integer n is a power of four, if there exists an integer x such that n == 4^x.

class Solution {
public:
    bool isPowerOfFour(int n) 
    {int p=n,f=0;
        if(n<=0)
        return 0;
        if(n==1)
        return 1;
        if(((n-1)&n)==0)
        {
            for(int i=0;i*i<n;i++)
            {
                p=p>>2;
                if(p==1)
                f++;
             
            }
        }return (f==1);
    }
};
