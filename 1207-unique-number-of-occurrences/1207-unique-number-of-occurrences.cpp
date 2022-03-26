class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       
        unordered_map<int,int> mp;
        set<int> s;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i : mp)
        {
            if(s.find(i.second)!=s.end()){
                return false;}
            else
            {
                s.insert(i.second);
            }
            
        }
        return true;
    }
};