class Solution {
public:
    bool isPalindrome(int x) {
      long long int n=x,rev=0;
        while(n>0)
        {
            long long int d=n%10;
            n=n/10;
            rev=(rev*10)+d;
        }
        if(rev==x)
            return true;
        return false;
    }
};