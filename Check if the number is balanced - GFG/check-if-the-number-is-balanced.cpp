// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    // code here
	    if(N.size()==1)
	    return 1;
	    int mid=N.size()/2;
	    int s1=0,s2=0;
	    for(int i=0;i<N.size();i++)
	    {
	        if(i<mid)
	        {
	            s1+=N[i];
	        }
	        else if(i>mid)
	        {
	            s2+=N[i];
	        }
	        if(i==mid)
	        {
	            continue;
	        }
	    }
	    if(s1==s2)
	    return 1;
	    return 0;
	    
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends