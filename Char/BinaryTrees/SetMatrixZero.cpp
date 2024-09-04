#include<iostream>
#include<vector>
using namespace std;

void markRow(vector<vector<int>> &matrix, int row, int m)
{
    for(int j = 0; j < m; j++)
    {
        if(matrix[row][j] != 0)
        {
            matrix[row][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int col, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(matrix[i][col] != 0)
        {
            matrix[i][col] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == 0)
            {
                markRow(matrix, i, m);
                markCol(matrix, j, n);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "Printing the Final Matrix:\n";

    for(auto it : ans)
    {
        for(auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
