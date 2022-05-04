class Solution {
public:
    char findTheDifference(string s, string t) {
        int tsum=0,ssum=0;
       for(int i=0;i<t.size();i++)
       {
           tsum+=t[i];
           ssum+=s[i];
       }
    
        return tsum-ssum;
    }
};