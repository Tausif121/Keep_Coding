// { Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string s="";
       for(auto &i : s1)
       {
           //if(s2.find(i) != s2.end())
           if(s2.find(i) == string::npos)
           {
               s+=i;
           }
       }
        for(auto &i : s2)
       {
           if(s1.find(i) == string::npos)
           {
               s+=i;
           }
       }
        if(s.size()>0)
        
        return s;
        else
        return "-1";
    }

};

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Driver Code Ends