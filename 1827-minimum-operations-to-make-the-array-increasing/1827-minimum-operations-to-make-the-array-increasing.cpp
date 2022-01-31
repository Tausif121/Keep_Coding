class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
      for(int i=1;i<nums.size();i++)
      { 
          if(nums[i-1]<nums[i])
              continue;
          else
           
           {
              
              int k=0;
              k=(nums[i-1]+1)-(nums[i]);
              nums[i]=nums[i-1]+1;
              c+=k;
          }
      }
     return c;   
    }
    
};