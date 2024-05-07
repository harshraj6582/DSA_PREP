#include<iostream>
using namespace std ; 

// Reverse a String on the Basis of Recursion  
// Iterative Appoach is that we have two pointers named START and END while Traversing both of them we get the condition when the array is fully Travesed

void Reverse(string &word , int start , int end  ){
    // Writing Down the base Case which is just when the Start Pointer is ahead of the end pointer 
    if(start >= end ){
        return ; 
    }
    swap(word[start] , word[end]);
    // This case is done by me and all the other cases will be done by Recursion 
    Reverse(word , start+1  , end - 1 );
}



int main(){
    string word = "123456789";
    int start = 0 ;
    int end = word.size() -1 ;
    Reverse(word , start , end);
    cout<<endl<<word;
    
    return 0 ; 
}