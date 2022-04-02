class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int m = -1,curr=0;
        
        for(int i=arr.size()-1;i>=0;i--)
        {
            curr=arr[i];
            arr[i]=m;
            m=max(m,curr);
        }
        
        return arr;
    }
};