class Solution {
public:
    bool isPerfectSquare(int num) {
       long long i;
for( i=0; i*i<=num; i++)
{
if(i*i == num) return true;
}
return false;
}
};