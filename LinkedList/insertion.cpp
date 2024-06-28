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
    void Insertion_Head(Node* link , Node*& head  ){
        if(head == NULL){
            cout<<"Linked List is empty ";
            link->ptr = nullptr ; 
            head = link ; 
        }
        else{
            // Already Present in the Linked List 
            link->ptr = head ; 
            head  = link ; 
        }
       
       
    }

    void Insertion_Tail(Node* link , Node*& head){
        if(head == NULL){
            cout<<"Linked List is empty ";
            head = link;
            link->ptr = nullptr ; 
           
        }
        else{
            Node * temp = head ; 
            while(temp->ptr!=nullptr){
                temp = temp->ptr;
            }
            temp->ptr = link ; 
            link->ptr = nullptr ; 
        }
    }

    void Insertion_Position(Node* link , Node*&head , int pos ){
        if(head == NULL){
            cout<<"Linked List is empty ";
            head = link;
            link->ptr = nullptr ; 
           
        }
        else {
            Node* temp = head ; 
            while(pos != 1 ){
                temp = temp->ptr ; 

            }
            Node* temp2 = temp->ptr;
            temp->ptr = link ; 
            link->ptr = temp2;

        }
    }
};


int main(){
    Node link1 ; 
    Node link2(20 , nullptr);
    Node link5(50 , NULL);
    Node link4(40 , &link5);
    
    Node* dynamic = new Node(30 , nullptr);
    link1.data = 10;
    link1.ptr = &link2;
    link2.ptr = dynamic;
    dynamic->ptr = &link4;

    // Printing of the Linked list 
    // link1.printing(link1);

    // Insertion at head 
    Node nextnode(60 , nullptr);
    Node* head = &link1;
    link1.Insertion_Head(&nextnode , head);

    

    // Insertion at Tail 
    Node last_Node(70,nullptr);
    
    last_Node.Insertion_Tail(&last_Node, head);

    



    // Insert At Any Position 
    int pos = 5 ;
    Node anyPosition(80 , nullptr);
    anyPosition.Insertion_Position(&anyPosition, head , 5);

    nextnode.printing(nextnode);






    
    return 0 ;
}