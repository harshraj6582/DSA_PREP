class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // The Inorder Solution to this problem is 
        // Transposing the Matrix 
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        //Now we have to reverse the Row to get the Rotated Matrix 
        for(int i = 0 ; i < n ; i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};