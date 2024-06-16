#include<iostream>
#include<string>
#include<vector>
using namespace std ; 

// Reverse A Strong using Recursion 

void Reverse_String(string &word , int left , int right ){
    // Write the Base Case when the Left Pointer exceeds the value of the right 
    // Pointer 
    //////////////BASE CASE///////////////
    if(left >= right){
        return ;
    }
    // One Case 
    swap(word[left] , word[right]);

    // Next Call for the Propogation 
     Reverse_String(word , left +1 , right -1 );

}

int main(){
    string word = "harsh";
    int left = 0 ;
    int right  = word.size() - 1 ;
    Reverse_String(word , left , right );
    cout<<word;
    return 0 ; 
}