class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<m+n;i++)
        {
            if(nums1[i]==0)
            {
                nums1[i]=nums2[j];
                j+=1;
            }
            
        }
        sort(nums1.begin(),nums1.end());
    }
};