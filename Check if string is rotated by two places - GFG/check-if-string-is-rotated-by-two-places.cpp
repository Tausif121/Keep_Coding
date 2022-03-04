// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
     bool isRotated(string str1, string str2)
   {
       // Your code here
       int n =str1.size();
       string st=str1.substr(0,2);
       string st1=str1.substr(2,n-2);
       string s=str1.substr(0,n-2);
       string s1=str1.substr(n-2,2);
       if(st1+st==str2||s1+s==str2)return true;
       return false;
   }
};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends