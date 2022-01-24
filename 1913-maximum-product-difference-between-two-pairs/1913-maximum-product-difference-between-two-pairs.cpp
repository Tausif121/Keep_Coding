/*
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size();
        int diff=0;
            diff=(nums[k-1]*nums[k-2])-(nums[0]*nums[1]);
       return diff; 
    }
};

*/
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int firstMin=INT_MAX,secondMin=INT_MAX,firstMax=INT_MIN,secondMax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>firstMax){
                secondMax=firstMax;
                firstMax=nums[i];
            }else if(nums[i]>secondMax){
                secondMax=nums[i];
            }
            if(nums[i]<firstMin){
                secondMin=firstMin;
                firstMin=nums[i];
            }else if(nums[i]<secondMin)
                secondMin=nums[i];
        }
        return (firstMax*secondMax-firstMin*secondMin);
    }
};

