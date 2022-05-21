// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long
class Solution{

public:
    vector<ll> nthRowOfPascalTriangle(int n) {
         if(n==1)
        {
            vector<ll> tmp;
            tmp.push_back(1);
            return tmp;
        }
        vector<ll> tans = nthRowOfPascalTriangle(n-1);
        vector<ll> ans;
        
        for(int i=0;i<=tans.size();i++)
        {
            if(i==0 || i==tans.size())
            ans.push_back(1);
            else
        ans.push_back((tans[i]+tans[i-1])%1000000007);
        }
        return ans;
    }
    
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends