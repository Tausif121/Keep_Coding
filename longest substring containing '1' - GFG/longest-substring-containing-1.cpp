// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}
// } Driver Code Ends


int maxlength( string s)
{
// your code here
int c=0,m=0;
for(auto &i : s)
{
    if(i=='1')
    {
        c+=1;
        if(c>m)
        m=c;
    }
    else
    {
        c=0;
    }
    
    
}
return m;
}