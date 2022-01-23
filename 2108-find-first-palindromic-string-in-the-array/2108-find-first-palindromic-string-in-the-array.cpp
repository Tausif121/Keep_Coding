class Solution {
public:
    string firstPalindrome(vector<string>& A) {
        for (auto &s : A) {
            string r(rbegin(s), rend(s));
            if (r == s) return s;
        }
        return "";
    }
};

/*
class Solution {
public:
    bool check(string s)
    {
        int l=0,h=s.size()-1;
        while(l<h)
        {
            if(s[l++]!=s[h--])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int i;
        for(i=0;i<words.size();i++)
        {
            if(check(words[i]))
                return words[i];
        }
        return "";
    }
};




class Solution {
public:
    bool palindrome(string s){
        int e = s.size()-1;
        for(int i = 0; i < s.size() ; i++){
            if(s[i]!= s[e--]) 
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto s : words){
            if(palindrome(s)) return s;
        }
        return "";
    }
    
};

*/
