// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int n=str1.size(),m=str2.size();
        // Your code here
        if(n!=m)
        {
            return false;
        }
       
        int arr[MAX_CHARS]={0};
      int ar[MAX_CHARS]={0};
   
       for(int i=0;i<n;i++)
       {
           arr[str1[i]]++;
           ar[str2[i]]++;
       }
       
       for(int i=0;i<str1.length();i++)
               if(arr[str1[i]]!=ar[str2[i]])
                   return 0;
           
       return 1;
   }
};
// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends