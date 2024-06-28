#include<iostream>
using namespace std ; 

class Node {
    public :

    int data ;
    Node* ptr ; 

    Node(){
        // Default Constructor 
        this->data =  0 ;
        this->ptr = nullptr;

    }

    Node(int data , Node* ptr ){
        this->data = data ;
        this->ptr = ptr ; 
    }
    void printing(Node link){
        int count = 0 ;
         Node* temp = &link;;
         while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->ptr;
         }  

    }
};


int main(){
    Node link1 ; 
    Node link2(20 , nullptr);
    Node* dynamic = new Node(30 , nullptr);
    link1.data = 10;
    link1.ptr = &link2;
    link2.ptr = dynamic;
    dynamic->ptr = NULL;
    link1.printing(link1);

    
    return 0 ;
}