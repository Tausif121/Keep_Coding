// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
         vector<int>v;
        vector<int>v2={-1};
        unordered_map<int,int>m;
        
        for(int i=0; i<n; i++)
        {
            m[arr[i]]++;
        }
        for(auto a: m)
        {
            if(a.second>1)
            {
                v.push_back(a.first);
            }
        }
        if(v.empty())return v2;

        else sort(v.begin(), v.end());
        return v;
        
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends