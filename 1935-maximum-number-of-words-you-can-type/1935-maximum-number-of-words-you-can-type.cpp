class Solution {
public:
    int canBeTypedWords(string text, string bl) {
   int ans=0;
        bool okay=true;
        for(int i=0;i<text.length();i++)
        {
            if(bl.find(text[i]) != -1)
                okay=false;
            if(text[i]==' ' || i ==text.length()-1)
            {
                if(okay==true)
                    ans+=1;
                else
                    okay=true;
            }
        }
        return ans;
    }
};