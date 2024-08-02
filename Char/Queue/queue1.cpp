#include<iostream>
#include<queue>
using namespace std ;

// Queue is just like a queue which we get in the bank line 


int main(){
    // Creation of queue 
    queue<int> q ;

    // insertion in Queue 
    q.push(5);


    // Print the Size of Queue 
    cout<<"Size of Queue"<<q.size() << endl;

    // Empty 
    if(q.empty() == true){
        cout<<"Queue is Empty"<<endl;
    }
    return 0 ;

}