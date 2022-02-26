class Solution {
public:
    bool squareIsWhite(string s) {
     if(((s[0]-'a') + (s[1]-'0')) %2 == 0)
     
         return true;
     
        else
        
         return false;
        
       }
};