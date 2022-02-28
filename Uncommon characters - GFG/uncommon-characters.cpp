// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string s="";
            for(int i=0;i<A.size();i++)
            {
                if(B.find(A[i]) == -1)
                {
                    if(s.find(A[i]) == -1)
                    {
                   s+=A[i];
                    }
                }
            }
            for(int i=0;i<B.size();i++)
            {
                if(A.find(B[i]) == -1)
                { if(s.find(B[i]) == -1)
                    {
                   s+=B[i]; 
                    }
                }
            }
            sort(s.begin(),s.end());
            if(s.size()==0)
            return "-1";
            else
            return s;
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends