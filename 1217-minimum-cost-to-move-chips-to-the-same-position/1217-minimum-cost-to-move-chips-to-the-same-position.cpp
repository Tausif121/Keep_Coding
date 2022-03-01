class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even=0,odd=0;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
                even+=1;
            else
                odd+=1;
            
        }
        return min(odd,even);
    }
};