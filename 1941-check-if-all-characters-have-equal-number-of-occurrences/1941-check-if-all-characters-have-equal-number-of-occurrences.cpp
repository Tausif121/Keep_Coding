class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        map<char,int> mp;
      for(int i=0;i<s.length();i++)
      {
         mp[s[i]]++; 
      }
        int v=mp[s[0]];
      for(auto j:mp)
      {
          if(v != j.second)
              return false;
      }
        return true;
    }
};