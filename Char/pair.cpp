#include<iostream>
#include<vector>
#include<vector>

using namespace std ;

int main(){
    pair<int , string> p(20,"Harsh");
    cout<<p.first<<endl<<p.second;
    auto p2 = make_pair(211430 , "ayush");
    cout<<p2.first<<endl<<p2.second;
    return 0;
}