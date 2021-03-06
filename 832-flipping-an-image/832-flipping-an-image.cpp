class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i=0; i<A.size(); i++) {
            reverse(A[i].begin(), A[i].end());
            for (int j=0; j<A[i].size(); j++) {
                A[i][j] ^= 1;
            }
        }
        return A;
    }
};

/*
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto& row : A) {
            reverse(row.begin(), row.end());
            for (auto& v : row) v ^= 1;
        }
        return A;
    }
};
*/
