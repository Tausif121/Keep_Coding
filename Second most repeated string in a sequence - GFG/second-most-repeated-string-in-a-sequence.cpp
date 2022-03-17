// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
       unordered_map<string,int> mp;
       int max1=-1;
       int max2=-1;
       string str="";
       for(int i=0;i<n;i++)
       {
           mp[arr[i]]++;
       }
       for(auto a : mp)
       {
           if(a.second > max1)
           max1=a.second;
       }
         for(auto b : mp)
       {
           if(b.second !=max1 && b.second>max2){
           max2=b.second;
           str=b.first;}
       }
        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends