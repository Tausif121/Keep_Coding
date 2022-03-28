class Solution {
public:
    int countGoodSubstrings(string s) {
       
        int c=0;
        string x="";
        for(int i=0;i<s.size();i++)
        {
            string x=s.substr(i,3);{
                if(x.size()==3){
            if(x[0]!=x[1] && x[1]!=x[2] && x[2]!=x[0])
                c+=1;
                }
            }
        }
        return c;
    }
};