// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long countStrings(string S)
    {
       long long sz = S.size();
        vector<long long> f(26,0);
        long long ans = sz*(sz-1);
        for(long long i = 0 ; i < sz; i++){
            f[S[i] -'a']++;
        }
        bool flag = false;
        for(long long r : f){
            if(r >= 2){
                ans -= r*(r-1);
                flag = true;
            }
        }
        ans/=2;
        if(flag) ans++; 
    return ans;
    }
};


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution ob;
        long long ans = ob.countStrings(S);
        cout<<ans<<endl;
    }
    return 0;
}   // } Driver Code Ends