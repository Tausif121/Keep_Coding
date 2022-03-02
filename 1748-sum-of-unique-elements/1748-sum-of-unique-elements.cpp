class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      unordered_map<int,int> m;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i : m)
        {
            if(i.second == 1)
                s+=i.first;
        }
        return s;
    }
};