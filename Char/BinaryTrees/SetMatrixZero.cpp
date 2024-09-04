// #include<iostream>
// #include<vector>
// using namespace std;

// // void markRow(vector<vector<int>> &matrix, int row, int m)
// // {
// //     for(int j = 0; j < m; j++)
// //     {
// //         if(matrix[row][j] != 0)
// //         {
// //             matrix[row][j] = -1;
// //         }
// //     }
// // }

// // void markCol(vector<vector<int>> &matrix, int col, int n)
// // {
// //     for(int i = 0; i < n; i++)
// //     {
// //         if(matrix[i][col] != 0)
// //         {
// //             matrix[i][col] = -1;
// //         }
// //     }
// // }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m , vector<int> row  , vector<int> col)
// {
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             if(matrix[i][j] == 0)
//             {
//                 // markRow(matrix, i, m);
//                 // markCol(matrix, j, n);
//                 row[i] = 0 ;
//                 col[j] = 0 ;
//             }
//         }
//     }

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             if(row[i] == 0 || col[i] == 0 )
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<int> row(n,1) ; 
//     vector<int> col(n,1) ; 

//     // Create a New array of Size of row as well as the Col for Marking the ith as well as the jth col to 0 
//     // Then check the value after traversing each of th elemets and check if the Ith or the Jth row or the col is 0 . Then we mark the element as 0 


//     vector<vector<int>> ans = zeroMatrix(matrix, n, m , row , col );

//     cout << "Printing the Final Matrix:\n";

//     for(auto it : ans)
//     {
//         for(auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// // This approach is used to create an addtional row as well as col and mark them as 0 if there is any elemnt present 
// // The n Accorsingly traverse thew mtaix and chec fo the consiotn in whihc there is particular 0 then mark the current elemtn as 0 

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m, vector<int> &row, vector<int> &col)
{
    // First pass: Identify rows and columns that should be zeroed
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
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, 1);  // Vector to mark rows for zeroing
    vector<int> col(m, 1);  // Vector to mark columns for zeroing

    // Update the matrix with zeros based on marked rows and columns
    vector<vector<int>> ans = zeroMatrix(matrix, n, m, row, col);

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
