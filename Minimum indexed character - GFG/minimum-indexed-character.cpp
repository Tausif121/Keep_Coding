// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int pos = -1;
        int mini = INT_MAX;
        int flag=0;
        for(int i=0;i<patt.size();i++)
        {if(str.find(patt[i]) != -1)
            {   flag=1;
                pos=str.find(patt[i]);
                mini=min(pos,mini);
            }
        }
        if(flag !=0)
        return mini;
        else
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends