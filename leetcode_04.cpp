//Given an integer n, return true if it is a power of three. Otherwise, return false.
//An integer n is a power of three, if there exists an integer x such that n == 3^x.

class Solution {
public:
    bool isPowerOfThree(int n,int i=0) 
    {if((pow(3,i))>n)
    return 0;
        if(n<=0)
        return 0;
        if(pow(3,i)==n)
        return 1;
        return isPowerOfThree(n,i+1);
    }
};//my

class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<20;i++){
            int ans=pow(3,i);
            if(ans==n){
                return true;
            }
        }
        return  false;
    }
};// best
