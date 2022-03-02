class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int c[101]={};
        int s=0;
        for(int i=0;i<nums.size();++i)
        {
            ++c[nums[i]];
        }
        for(int i=0;i<101;++i)
        {
            if(c[i] == 1)
                s+=i;
        }
        return s;
    }
};