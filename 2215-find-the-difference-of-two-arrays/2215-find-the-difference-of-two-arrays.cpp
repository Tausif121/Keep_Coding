class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
       unordered_set<int> sa(a.begin(),a.end()), sb(b.begin(),b.end());
       vector<vector<int>> ans(2);
        for(auto i : sa)
        {
          if(sb.find(i) == sb.end())
              ans[0].push_back(i);
        }
        for(auto i : sb)
        {
          if(sa.find(i) == sa.end())
              ans[1].push_back(i);  
        }
      return ans;  
    }
};