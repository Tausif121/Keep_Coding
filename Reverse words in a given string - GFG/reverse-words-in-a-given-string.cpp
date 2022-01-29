// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
   public:
   //Function to reverse words in a given string.
   string reverseWords(string s) 
   { 
       int i;
       string t="",tm="";
       for(i=s.size()-1; i>=0; i--){
           if(s[i]=='.'){
               reverse(tm.begin(),tm.end());
               tm+=s[i];
               t+=tm;
               tm="";
           }
           else tm+=s[i];
       }
       reverse(tm.begin(),tm.end());
       t+=tm;
       
       return t;
   } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends