#include<iostream>
using namespace std;
int stack[100],n,top=-1,choice=0;

void push(){
    int val;
    cout<<"enter the value to be pushed:";
    cin>>val;
    if(top==n-1){
        cout<<"Overflow";
    }
    else{
        top=top+1;
        stack[top]=val;
    }
}

void pop(){
    if(top==-1){
        cout<<"Underflow";
    }
    else{
        top=top-1;
    }

}


void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    cout<<"Enter the size of the array:";
    cin>>n;
    while(choice!=3){
        cout<<"1.Push\n2.Pop\n3.Display\n";
        cout<<"Enter your choice :";
        cin>>choice;

        switch(choice){
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: display();
            break;

            default : cout<<"Enter a valid operation.";

        };
    }

}