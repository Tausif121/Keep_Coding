class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
      unordered_set<int> s1,s2,s3;
        vector<int> v;
        unordered_map<int,int> m1;
        for(auto x: nums1)
        {
            s1.insert(x);
        }
         for(auto x: nums2)
        {
            s2.insert(x);
        }
         for(auto x: nums3)
        {
            s3.insert(x);
        }
         for(auto x: s1)
        {
            m1[x]++;
        }
         for(auto x: s2)
        {
            m1[x]++;
        }
         for(auto x: s3)
        {
            m1[x]++;
        }
         for(auto x: m1)
        {
            if(x.second>1)
                v.push_back(x.first);
        }
       return v; 
    }
};