// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int findHeight(int N, int arr[])
   {
       map<int,int>m;
       for(int i=0;i<N;i++)
       {
           if(arr[i]==-1)
           {
               m[i]=1;
           }
       }
       int mx=INT_MIN;
       for(int i=0;i<N;i++)
       {
           if(arr[i]!=-1)
           {
               if(m.find(arr[i])!=m.end())
               {
                   int level=m[arr[i]];
                   m[i]=level+1;
                   mx=max(mx,level+1);
               }
           }
       }
       
       
       return mx;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends