// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   char c;
        stack<int> s;
        for(int i=0;i<x.size();i++)
        {
          if(x[i] == '(' || x[i] == '{' ||x[i] == '[') 
          s.push(x[i]);
          else if(x[i] == ')' || x[i] == '}' ||x[i] == ']')
          {
              if(s.empty() == 1){
              return false;}
            else  {
          c = s.top();
          }
          if(x[i]==')' && c=='(' || x[i]=='}' && c=='{' || x[i]==']' && c=='[' )
          {
              s.pop();
          }
          else
          {
              return false;
          }
          
          }
        }
        if(s.empty())
        return true;
        else
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends