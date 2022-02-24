// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N){
       vector<bool> v(N+1,false);
       for(int i=2;i<N;i++){
           if(v[i]==false){
               for(int j=i+i;j<=N;j+=i)v[j]=1;
           }
       }
       for(int i=2;i<N;i++){
           if(!v[i] && !v[N-i]){
               return {i,N-i};
           }
       }
       return {};
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends