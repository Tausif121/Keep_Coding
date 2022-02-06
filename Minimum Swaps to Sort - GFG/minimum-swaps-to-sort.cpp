// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	      int count=0;
    int n=nums.size();
    vector<int> vec = nums;
    sort(vec.begin(),vec.end());
    map<int,int> m;
    
    
    for(int i=0;i<n;i++)
    {
        m[vec[i]]=i;
    }
    
    for(int i=0;i<n;)
    {
        while(i!=m[nums[i]])
        {
            swap(nums[i],nums[m[nums[i]]]);
            count++;
        }
        i++;
    }
    
  return count;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends