class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        int i=0;
        int k=odd.size();
        int l=even.size();
        vector<int> ans;
       for(int i=0;i<even.size();i++)
        {
            if(i<l)
                ans.push_back(even[i]);
           
            if(i<k)
            {
                ans.push_back(odd[i]);
               
            }
        }
        return ans;
    }
};