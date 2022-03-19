// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
 public:
 long long fact(int n){
     if(n==0||n==1)return n;
     return n*fact(n-1);
 }
   long long findRank(string str) {
       //code here
       string temp=str;
       int i=0;
       long long ans=1;
       sort(temp.begin(),temp.end());
       while(i!=str.size()){
           for(int j=0;j<temp.size();j++){
               if(temp[j]==str[i]){  //////if match the charector then go forward 
                   temp=temp.substr(0,j)+temp.substr(j+1);
                   i++;
                   break;
               }
               else{
                   ans+=fact(temp.size()-1);  ///if not match then add factorial in ans
               }
           }
       }
       return ans;
   }
};

// { Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends