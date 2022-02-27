class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0)
        {
        return true;
        
        }
      int d=0;
        d=num%10;
        if(d==0)
            return false;
        else
            return true;
    }
};