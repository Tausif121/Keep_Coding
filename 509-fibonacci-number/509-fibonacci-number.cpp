class Solution {
public:
    int fib(int n) {
       int a = 0, b = 1;
        while (n > 0)
        {
            b = b + a;
            a = b - a;
            n-=1;
        }
        return a;
    }
};