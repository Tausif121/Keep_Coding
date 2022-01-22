class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
       for(int i=0;i<word1.size();i++)
       {
           s1+=word1[i];
       }
         for(int i=0;i<word2.size();i++)
       {
           s2+=word2[i];
       }
       if(s1==s2)
           return true;
           else
           return false;
        
    }
};

/*
Using one string only

string word = "";
        for (string s : word1) word += s;
        for (string s : word2) word += s;
        for (int i = 0, j = word.size() / 2; j < word.size(); i++, j++)
            if (word[i] != word[j]) 
        return false;
        return true;
        
*/
