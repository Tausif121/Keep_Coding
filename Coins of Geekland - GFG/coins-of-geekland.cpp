// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int k){
        // Your code goes here
        int sum = 0, max_sum = INT_MIN;

        // initial sub grid

        for(int i = 0; i < k; i++){
            for(int j = 0; j < k; j++){
                sum += mat[i][j];
            }
        }
        max_sum = max(sum, max_sum);

		// set the boundaries
        int low = k - 1, high = 0, left = 0, right = k - 1;
        
		// travel all sub grids
		
        while(1){
            int prev_sum = sum;
            
            while(right < N - 1){
                right++;
                // moving right side
                for(int i = high ; i <= low; i++){
                    sum += mat[i][right];
                    sum -= mat[i][left];
                }
                max_sum = max(sum, max_sum);
                left++;
            }
            
            // set the iterators back to left most grid
            
            sum = prev_sum; 
            left = 0;
            right = k-1;
            
            // moving down
            low++;
            if(low >= N){
                break;
            }
            for(int i = left; i <= right; i++){
                sum += mat[low][i];
                sum -= mat[high][i];
            }
            high++;
            max_sum = max(sum, max_sum);
        }
        return max_sum;
    }
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends