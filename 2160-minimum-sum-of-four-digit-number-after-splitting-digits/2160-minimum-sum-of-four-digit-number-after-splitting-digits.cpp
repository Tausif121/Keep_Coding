class Solution{
public:
    int minimumSum(int num){
        string s = to_string(num);
        sort(s.begin(), s.end());
        int res = (s[0] - '0' + s[1] - '0') * 10 + s[2] - '0' + s[3] - '0';
        
        return res;
    }
};

/*
class Solution {
public:
    int minimumSum(int num) {
        int a[4] = {0};
        a[0] = num % 10;
        num /= 10;
        a[1] = num % 10;
        num /= 10;
        a[2] = num % 10;
        num /= 10;
        a[3] = num % 10;
        sort(a, a + 4);
        return ((a[0] + a[1]) * 10 + a[2] + a[3]);
    }
};
*/