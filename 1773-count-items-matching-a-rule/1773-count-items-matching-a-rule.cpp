class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0;
      for(int i=0;i<items.size();i++)
      {
          if(ruleKey == "type")
          {
              if(items[i][0] == ruleValue)
              {
                  c+=1;
              }
          }
          else if(ruleKey == "color")
          {
              if(items[i][1] == ruleValue)
              {
                  c+=1;
              }
          }
          else if(ruleKey == "name")
          {
              if(items[i][2] == ruleValue)
              {
                  c+=1;
              }
          }
      }
         return c;
    }
   
};




/*
Approach 1:

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i;
        if(ruleKey=="type")i=0;
        if(ruleKey=="color")i=1;
        if(ruleKey=="name")i=2;
        
        int ans=0;
        for(int j=0;j<items.size();j++){
            if(items[j][i]==ruleValue)ans++;
        }
        
        return ans;
    }
};


Approach 2:
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int i = ruleKey == "type" ? 0 : ruleKey == "color" ? 1 : 2;
        int ans = 0;
        
        for(auto item : items)
        {
            if(item[i] == ruleValue)
                ans++;
        }
        
       return ans;
        
    }
};


*/