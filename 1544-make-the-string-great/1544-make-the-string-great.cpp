class Solution {
public:
   string makeGood(string s) {
for(int i=1;i<s.size();i++)
{
    if(abs(s[i]-s[i-1])==32){
      s= s.substr(0,i-1)+s.substr(i+1);
        i=0;
    }
}
       return s;
   }
};