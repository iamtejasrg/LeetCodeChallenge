class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        int i,j;
        j = A.size();
        vector<int> ans;
        
        while(j>1){
            i = distance(A.begin(), max_element(A.begin(), A.begin() + j));
            reverse(A.begin(), A.begin()+i+1);
            reverse(A.begin(), A.begin()+j);
            ans.push_back(i+1);
            ans.push_back(j);
            //return A;
            j--;
        }
        
    
        
        return ans;
        
    }
};