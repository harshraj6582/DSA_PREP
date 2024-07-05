#include<iostream>
#include<vector>

using namespace std ;

const int n = 7 ;
int arr[n];
int top1 = n/2 ;
int top2 = n/2 + 1 ;

void push1(int x){
    if(top1 >=0){
        arr[top1] = x ;
        top1--;
    }
    else{
        cout<<"Stack1 Overflow";
    }
};

int pop1(){
    if(top1 < n / 2){
        top1++;
        int x = arr[top1];
        return x ;
    }
     else{
        cout<<"Stack1 Underflow"<<endl;
        return -1 ;
     }
};

int pop2(){
    if(top2 > n/2 + 1 ){
        top2--;
        int temp = arr[top2];
        return temp;
    }
    else {
        return -1 ;
    }
};

void push2(int x){
    if(top2 <= n -1 ){
        arr[top2] = x ;
        top2++;
    }
    else{
        cout<<"Condiiton is not satisfiesd ";
    }
};

int main(){
    push1(1);
    push1(2);
    push2(3);
    push2(4);
    
    cout << "Pop from Stack1: " << pop1() << endl; // Should print 1
    cout << "Pop from Stack2: " << pop2() << endl; // Should print 4

    return 0 ;
}