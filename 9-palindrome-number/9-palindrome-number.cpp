class Solution {
public:
    bool isPalindrome(int x) {
          if(x<0|| (x!=0 &&x%10==0))
              return false;
       int n=x;
        long rev=0;
        while(n>0)
        {
             int d=n%10;
            n=n/10;
            rev=(rev*10)+d;
        }
        if(rev==x)
            return true;
        return false;
    }
};