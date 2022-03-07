class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        for (int i = 1; i < arr.size(); ++i) {
            int cur_diff = arr[i] - arr[i-1];
            if (cur_diff > min_diff) continue;
            else if (cur_diff == min_diff) {
                res.push_back({arr[i-1], arr[i]});
            } else {
                res.clear();
                res.push_back({arr[i-1], arr[i]});
                min_diff = cur_diff;
            }   
        }
        return res;
    }
};