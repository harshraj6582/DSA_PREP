#include<iostream>
using namespace std ; 

int solve(vector<int> & nums , int size , int index){
    // Base Case 
    int finalAns = 0 ;
    if(index >= size){
        return finalAns ;
        // We Are Getting out of Bound in this case
    }
    // Chori Krlo at the Ith Index
    int option_1 = nums[index] + solve(nums , size  , index +2);

    // Chori Mat Kro at the ith Index
    int option_2 = 0 + solve(nums , size , index+1);

    // Extracting the Maximum Possible Value of the 
    // Provided option1 as well as for the option-2 
        finalAns = max(option-1 , option2);
        return finalans ; 
}


int main(){
    int size = nums.size();
    int size = 0;
    int ans = solve(nums , size , index);
    return ans ; 
}