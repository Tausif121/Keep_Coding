// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        unordered_map<int, int>mp;
        int i = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
        greater<pair<int, int>>>pq;
        // min elt of k + 1 is not useful, 
        // so min heap to pop the same
        vector<int>v;
        
        for(int i = 0; i < array.size(); i++){
            mp[array[i]]++;
        }
        
        for(auto it : mp){
            pq.push({it.second, it.first});
            if(i++ >= k) pq.pop();
        }
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        reverse(v.begin(), v.end());
        return v; 
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends