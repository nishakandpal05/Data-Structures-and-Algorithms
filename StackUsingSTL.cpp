#include<iostream>
#include<stack>
using namespace std;

int main(){

    //Creation of stack
    stack<int>s;

    //Push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //Pop Operation
    s.pop();
    cout<<"The top element is:"<<s.top();
    cout<<"\n";

    //isEmpty operation
    if(s.empty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty";
    }



    return 0;

}

