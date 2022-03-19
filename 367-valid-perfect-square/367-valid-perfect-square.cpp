class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return true;
        long long lim=num/2;
        for(long long i=0;i<=lim;i++)
        {
            if(i*i == num)
                return true;
        }
        return false;
    }
};