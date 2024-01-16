#include<iostream>
#include<limits.h>
#include<vector>
using namespace std ;

void printArray(int arr[][3] , int row , int col ){
     // Printing the Array Elements 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
void colArray(int arr[][3] , int row , int col ){
     // Printing the Array Elements 

     cout<<"This is Coloumn Wise Printing ";
     cout<<endl;
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cout<<arr[j][i];
        }
        cout<<endl;
    }
}
bool findTarget(int arr[][3] , int row , int col){
    int target = 3 ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] == target){
                return true ; 
            }
        }
    }


    // If Element is Not Found 
    return false ; 
}

void maxArray(int arr[][3] , int row , int col){
    int maxAns = INT_MIN;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }

        }
    }
    cout<<"The Maximum Elements is ";
    cout<<endl<<maxAns;
}


void minArray(int arr[][3] , int row , int col){
    int minAns = INT_MAX;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] < minAns){
                minAns = arr[i][j];
            }

        }
    }
    cout<<"The Minimum  Elements is ";
    cout<<endl<<minAns;
}

void rowWiseSum(int arr[][3] , int row  , int col ){
    
    for(int i = 0 ; i < row ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < col ; j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl; 
    }
}

void Transpose(int arr[] [3] , int row , int col ){
    for(int i = 0 ; i < row ; i++){
        for(int j = i ; j < col ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}



int main(){

    // // Intializing of the 2-D Array 
    // int arr[3][3] ; 
  
    // // // Printing the Array Elements 
    // // for(int i = 0 ; i < 4 ; i++){
    // //     for(int j = 0 ; j < 3 ; j++){
    // //         cout<<arr[i][j];
    // //     }
    // //     cout<<endl;
    // // }



    // int row = 3 ;
    // int col = 3 ; 

    // for(int i = 0 ; i < row ; i++){
    //     for(int j = 0 ; j < col ; j++){
    //         cout<<"Enter the Array Elements";
    //         cin >> arr[i][j];
    //     }
    // }
    // for(int i = 0 ; i < row ; i++){
    //     for(int j = 0 ; j < col ; j++){
            
    //         cout << arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // cout<<"This is the Original Array ";
    // cout<<endl;

    // // cout<<"Find The Target or Not "<<findTarget(arr , row , col );
    

    // // Maximum Elements of The Array 

    // // maxArray(arr , row , col );
    // // minArray(arr , row , col );
    // // rowWiseSum(arr , row , col );
    // Transpose(arr , row , col );




    ///// VECTOR /////////////////

    int arr[5];
    vector<int> v(5);

    cout<<"Size of Vector : " << v.size();
    cout << endl ;

    for(int i = 0 ; i < v.size() ; i++){
        cout<< v[i]<<" ";
    }
    cout<<endl; 
   

    return 0 ; 
}