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