// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    void prank(long long a[], int n){
      for(int i = 0 ; i < n; i++){
          int j = i ; 
          int temp = a[i];
          while(a[j] < n){
              int k = a[j];
               if(a[k] >= n){
                   a[j] = temp + n;
                   break;
               }
              a[j] = a[k] + n;
              j = k;
          }
      }
      for(int i = 0 ; i < n ; i++)
      a[i] -= n;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0 ;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);

        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}

  // } Driver Code Ends