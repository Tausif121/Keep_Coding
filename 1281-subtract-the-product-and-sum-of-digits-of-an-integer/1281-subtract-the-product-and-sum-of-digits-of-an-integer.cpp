class Solution {
public:
    int subtractProductAndSum(int n) {
       int s=0,pro=1;
        while(n!=0)
        {
            s+=n%10;
            pro*=n%10;
            n/=10;
        }
      return pro-s;  
    }
    
};