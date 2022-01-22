class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       

string word = "";
        for (string s : word1) word += s;
        for (string s : word2) word += s;
        for (int i = 0, j = word.size() / 2; j < word.size(); i++, j++)
            if (word[i] != word[j]) 
        return false;
        return true;
        
    }
};


