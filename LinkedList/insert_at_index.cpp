#include<iostream>
using namespace std ; 

class Node {
    public :
    int data ; 
    Node* ptr ; 

    Node(int data , Node* ptr){
        this->data = data ;
        this->ptr = ptr ; 
    }
    void Insert(Node* link , int pos , Node* temp , Node*& head ){
        // There are 3 Edges Cases when the Linked list is empty 
        int currentIndex = 1 ;
        if(temp->ptr == NULL ){
           
            return ; 
            // No Posotion to Insert
        }
        else if (pos == 1 ){
            // Insert at the Starting of the Linked List 
            link->ptr = head ;
            head = link ;
            return ;

        }
        else{
            // Insert at Cetain Position 
            while(temp != NULL    &&  currentIndex < pos - 1 ){
                currentIndex++;
                temp = temp->ptr;
            }
            if(temp == NULL ){
                cout<<"This is a position of Overflow";
                return ; 
            }
            else{
                // 1->2->3->4->5->6
                Node* temp2 = temp->ptr ;
                temp->ptr = link ;
                link->ptr = temp2 ;
                return ;
            }
        }
    }
};

int main(){
    Node link1(10,nullptr);
    Node link2(20,nullptr);
    Node link3(30,nullptr);
    Node link4(40,nullptr);
    link1.ptr = &link2;
    link2.ptr = &link3;
    link3.ptr = &link4;

    Node link5(50,nullptr);
   

    Node* head = &link1 ;
    Node* temp = &link1 ;
    // Printing the Elements 
    link1.Insert(&link5, 3, head , temp);
    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp = temp->ptr;
    }   



    // Insert At Position 3 


    return 0;
}