class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        if(matrix[0].size() == 0) return false;
        int n = matrix[0].size();
        for(auto i:matrix){
            if( i[0] > target) return false;
            if(i[n-1] < target) continue;
            if(binary_search(i.begin(), i.end(), target)) return true;
        }
        return false;
    }
};