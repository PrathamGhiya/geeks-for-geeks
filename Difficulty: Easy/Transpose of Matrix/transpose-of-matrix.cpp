class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {

        // Method 1
        for(int i = 0; i < arr.size()-1; i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }
        return arr;

        
        // Method 2
        // int row = arr.size(), col = arr[0].size();
        
        // vector<vector<int>> my_matrix(col, vector<int>(row));
        
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         my_matrix[j][i] = arr[i][j];
        //     }
        // }
        
        // return my_matrix;
    }
};