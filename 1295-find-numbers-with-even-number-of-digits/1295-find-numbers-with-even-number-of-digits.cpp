class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for (auto num : nums) 
        {
        if(to_string(num).length()%2==0)
        res += 1;
        }
        return res;
    }
};




/*
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
            {
               count++;
            }
        }
        return count;
    }
};
*/








/*

class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int d=0;
      for(int i=0;i<nums.size();i++)
      {
          int n=0,c=0;
          n=nums[i];
          while(n!=0)
          {
              n/=10;
              c+=1;
          }
          if(c%2==0)
              d+=1;
      }
        return d;
    }
};
*/