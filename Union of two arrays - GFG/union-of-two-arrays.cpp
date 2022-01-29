// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        set<int> s;
       for(int i=0;i<n;i++){
           s.insert(a[i]);
       }
       for(int i=0;i<m;i++){
           s.insert(b[i]);
       }
           return s.size();
   }
        
        
        
        
        
   /*     
    int doUnion(int a[], int n, int b[], int m)
{unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    { map[a[i]]++;
    }
    for (int j = 0; j < m; j++) { 
    map[b[j]]++;

    }
   return map.size();

};

        long long k=m+n;
        long long c=0;
        long long arr[k];
        copy(a, a + n, arr);
        copy(b, b + m, arr + m);
        sort(arr,arr+k);
        for(long long i=0;i<k-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
             c+=1; 
            }
           
        }
        //k=k-c;
        return k-c;
    }
    */
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends