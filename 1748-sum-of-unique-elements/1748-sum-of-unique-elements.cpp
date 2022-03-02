class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
     // unordered_map<int,int> m;
        int c[101]={};
        int s=0;
        for(auto i : nums)
        {
            c[i]++;
        }
        for(int i=0;i<101;i++)
        {
            if(c[i] == 1)
                s+=i;
        }
        return s;
    }
};