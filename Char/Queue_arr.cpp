#include<iostream>
using namespace std ; 

void push(int* arr, int value, int &front, int &rear , int size ) {
    // 1-> When the Queue is Empty 
    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        arr[front] = value; // Insert the element
        cout << front << " :: " << rear << " ::" << endl;
    }
    // 2-> When the Queue is Full 
    else if (rear == (size - 1 ) || (rear-front) >= size) {
        cout << "Queue is full! Cannot push " << value << endl;
        return;
    }
    // 3-> Normal Condition when Neither it is Empty or Full 
    else {
        rear++;
        arr[rear] = value;
        cout << front << " :: " << rear << " ::" << endl;
    }
}
void printing(int* arr  , int size ){
    
    for(int i =  0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    
}
void pop(int* arr , int& front , int& rear , int size){
    // Possible Condition to check 
    // 1-> To check if the Queue is empty SO the Pop Operation is just not possible 
    if(front == -1  ){
        // No Pop Operation is Just Possible 
        cout<<"The Queue is Just Empty so No Pop Operation  is just possib l"<<endl;
        return ; 
    }
    // 2-> To check if ther is single element 
    else if (front == rear ){
        arr[front] = 0 ;
        front = rear = -1 ;
        // Special Case becasuse we have to move both of the pointer 
    }
    // 3-> There are sufficent elements in the Queue for Pop Operation 
    else{
        arr[front] = 0 ;
        front ++ ;
    }
}

int main(){
    // Declare Array of Size 
    int arr[5] ; 
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0 ; i < 5 ; i++)
    {
        arr[i] = 0 ;
        // All the elements of the array elements are just 0 
    }
    int front = -1 ;
    int rear  = -1 ;
    push(arr , 10 , front , rear ,  size );
    push(arr , 20 , front , rear ,  size );
    push(arr , 30 , front , rear ,  size );
    push(arr , 40 , front , rear  ,  size );
    push(arr , 50 , front , rear ,  size );
    
   
    
    
    
     pop(arr ,  front , rear ,  size   );
     pop(arr ,  front , rear ,  size   );
      pop(arr ,  front , rear ,  size   );
       pop(arr ,  front , rear ,  size   );
        pop(arr ,  front , rear ,  size   );
         pop(arr ,  front , rear ,  size   );
        
    
    printing(arr , size  );
  
    
    
    
    
    return 0 ;
}