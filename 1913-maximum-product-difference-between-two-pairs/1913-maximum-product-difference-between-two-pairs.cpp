class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size();
        int diff=0;
            diff=(nums[k-1]*nums[k-2])-(nums[0]*nums[1]);
       return diff; 
    }
};