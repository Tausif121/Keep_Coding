// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int N){
        // code here
        if(N == 0) return 0;
        else if(N == 2) return 1;
        else
        {
            int ans = 2*count(N-2);
            for(int i=3;i<=(N-2);i=i+2)
            {
                ans += count(i-1)*count(N-i-1);
            }
            return ans;
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends