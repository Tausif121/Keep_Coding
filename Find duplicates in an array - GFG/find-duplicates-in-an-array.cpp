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
        unordered_map<int, int> mp;
        int k=0,flag=0;
        //int map <int,int> mp;
        for(int i=0;i<n;i++)
        {
           mp[arr[i]]++;  
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
            v.push_back(i.first);
            
            flag=1;
            }
        }
        if (flag>0){
        sort(v.begin(), v.end());
        
        return v;
        }
        else
        {
        return v2;
        }
        //if(flag==0)
            
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