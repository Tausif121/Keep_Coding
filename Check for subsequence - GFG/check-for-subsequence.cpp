// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int a=0,b=0;
        while(a<A.size() && b<B.size())
    {
            if(A[a] == B[b])
            {
                a+=1;
                b+=1;
            }
            else
            {
                b+=1;
            }
    }
       if(a==A.size())
       
       return true;
       
       else
       return false;
    }
    
    
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends