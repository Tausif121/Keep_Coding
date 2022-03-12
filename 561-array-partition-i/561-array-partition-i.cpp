class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
      int n = nums.size();
        int s = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2)
        {s+=nums[i];
        }
        return s;
    }
};