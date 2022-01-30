class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=nums.size()-1;
        int ans=1;
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int maxi=nums[l];
        for(int i = 1;i <=maxi  ; ++i) {
        if(mini % i == 0 && maxi % i ==0) {
        ans = i;
    }
          
    }
         return ans; 
    }
        
};