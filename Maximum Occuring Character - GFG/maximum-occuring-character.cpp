// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int mx=INT_MIN;
        char c;
        map<char,int> m;
        for(int i=0;i<str.size();i++)
        {
            m[str[i]]++;
            mx=max(mx,m[str[i]]);
        }
        //sort(m.begin(),m.end());
        for(auto i : m)
        {
          if(i.second == mx){
          c=i.first;
          break;
          }
        }
        return c;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends