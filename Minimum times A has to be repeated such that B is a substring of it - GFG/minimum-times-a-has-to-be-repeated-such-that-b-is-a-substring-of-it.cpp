// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
 public:
   int minRepeats(string A, string B) {
       // code here
       int c=0,d=0;
      unordered_set<char>se1;
      int i;
      for(i=0;i<A.size();i++)
      {
          se1.insert(A[i]);
      }
      unordered_set<char>::iterator it;
      for(it=se1.begin();it!=se1.end();++it)
      {
          c++;
      }
      
      unordered_set<char>se2;

      for(i=0;i<B.size();i++)
      {
          se2.insert(B[i]);
      }
      unordered_set<char>::iterator itr;
      for(itr=se2.begin();itr!=se2.end();++itr)
      {
          d++;
      }
      int count=1;
      string p=A;
       if(c!=d)
       return -1;
       
       else if ( B.find(A) >=0 && B.find(A) <B.size() )
       {
           while(A.size()<B.size())
           {
              
                count++;     
                A+=p;                      
           }       
             if(A.find(B) >=0 && A.find(B)<A.size())
               {
                   return count;
               
               }       
             A+=p;
             if(A.find(B) >=0 && A.find(B)<A.size())
               {
                   return count+1;
                   
               }      
            else
            return -1;
       }
       else
       return -1;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends