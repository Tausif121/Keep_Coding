// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    	int copy[n];
    for(int i=0;i<n;i++){
        copy[i] = arr[i];
    }
    sort(copy,copy+n);
    for(int i=0;i<n;i++){
       int j = upper_bound(copy,copy+n,arr[i])-copy-1;
       if(j==n-1){
            arr[i] = -10000000;
       }
       else{
            arr[i] = copy[j+1];
       }
    }
    return arr;
}
