// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        //string st="";
      for(int i=0;i<s.size();i++)
      {
          if(s[0]>=97 && s[0]<=122)
          {
              s[i]=tolower(s[i]);
          }
          else
          {
              s[i]=toupper(s[i]);
          }
      }
      return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  // } Driver Code Ends