class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        
        // Method 1
        // Anti-Transpose
        for(int i=0;i<mat.size()-1;i++){
            for(int j=0;j<mat.size()-1-i;j++){
                swap(mat[i][j], mat[mat.size()-1-j][mat.size()-1-i]);
            }
        }
        
        // Reverse
        for(int i=0;i<mat.size();i++){
            reverse(mat[i].begin(), mat[i].end());
        }
        
        
        // Method 2
    }
};
