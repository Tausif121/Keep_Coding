class Solution {
public:
  int maxDepth(string s) {
        int res = 0;
        int depth = 0;
        for(int i =0 ; i < s.size(); i++)
        {
             if(s[i] == '('){
                depth+=1;
             res = max(depth,res);
        }
            else if(s[i] == ')')
                depth-=1;
           
        }
    return res;
    }
};