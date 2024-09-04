class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
         vector<int> row(n, 1);  // Vector to mark rows for zeroing
    vector<int> col(m, 1);  // Vector to mark columns for zeroing

       
        

         for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = 0;  
                col[j] = 0;  
            }
        }
    }

   
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(row[i] == 0 || col[j] == 0)  // Check column index 'j' instead of 'i'
            {
                matrix[i][j] = 0;
            }
        }
    }
    }
};