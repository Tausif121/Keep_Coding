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


