// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int n, int x, vector<int> a){
        map<string,int>m;
        // int n=a.size();
        for(int i=0;i<n;i++)
        {
            m[to_string(a[i])]++;
        }
        long long ans=0;
        string y=to_string(x);
        for(int i=0;i<y.length();i++)
        {
            string s=y.substr(0,i);
            string l=y.substr(i);
            // cout<<s<<" "<<l<<endl;
            if(m.find(s)!=m.end()&&m.find(l)!=m.end())
            {
                if(s!=l)
                ans+=(long long)(m[s]*m[l]);
                else
                ans+=(long long)(((m[s])*(m[s]-1)));
            }
        }
        return ans;
    }
};  

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends