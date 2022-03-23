class Solution {
public:
    int firstUniqChar(string s) {
      
      unordered_map<char,int> mp;
        for(int i=0;i<s.size();i+=1)
        {
            mp[s[i]]+=1;
        }
        for( int i=0;i<s.size();i+=1)
        {
            if( mp[s[i]] ==1){
                return i;
                break;
            }
                
        }
      return -1;  
        
    }
};