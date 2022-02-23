class Solution {
public:
    int subtractProductAndSum(int n) {
       int s=0,pro=1,d=0;
        while(n!=0)
        {
            d=n%10;
            s+=d;
            pro*=d;
            n/=10;
        }
        pro-=s;
      return pro;  
    }
    
};