class Solution {
public:
    string reversePrefix(string &word, char ch) {
        int i = word.find(ch);
        string s, t;
        if(i==-1) 
            return word;
        else{
            s = word.substr(0, i+1);
            t = word.substr(i+1);
            
            reverse(s.begin(), s.end());
        }
        return s+t;
    }
};
