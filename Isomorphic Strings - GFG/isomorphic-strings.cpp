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

       //Initialising arrays with length 26 as we have 26                           alphabets
       int arr1[26]={0},arr2[26]={0};

       //If the length of given 2 strings are not equal just                   return 0
       if(str1.length() != str2.length()){
           return 0;
       }

       //Storing count of each char of string1 in an                             array(arr1)
       for(int i=0; i<str1.length(); i++){
           arr1[str1[i] - 'a']++;
       }
       for(int i=0; i<str2.length(); i++){
           arr2[str2[i] - 'a']++;
       }

       //checking count of each char of str1 and str2 are                   equal or not in arr1 and arr2 respectively.If they are             not equal we can return 0 as they are not                               ISOMORPHIC(given in qstn).
       for(int i=0; i<str1.length(); i++){
           if(arr1[str1[i]-'a'] != arr2[str2[i]-'a']){
               return 0;
           }
       }
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