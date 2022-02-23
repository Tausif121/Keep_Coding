class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
 while(n){
      if(n % 2 == 0)
      {
          n/=2;
          c+=1;
      }
        else
      {
            n-=1;
            c+=1;
      }
        }
    return c;
    }
};