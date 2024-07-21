#include<iostream>
using namespace std;
int n, queue[100],choice=0,front=-1,rear=-1;

void enqueue(){
    int val;
    cout<<"Enter the value to be inserted : ";
    cin>>val;
    if(rear == n-1){  
        cout<<"Overflow";
        return;
    }
    else{
        if(front==-1 && rear==-1){   //if the element is the first element to be inserted
            front=rear=0;
        }else{
            rear=rear+1;
        }
        queue[rear]=val;
        
    }

}

void dequeue(){
    if(front==-1 || front > rear){
        cout<<"Underflow";
        return;
    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else{
            front=front+1;
        }
    }


}

void display(){
    if(front==-1){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Elements of queue are:";
        for(int i = front ; i!=rear ; i=i+1){
            cout<<queue[i]<<" ";
        }
        cout<<queue[rear]<<" ";
    }


}


int main(){
    printf("Enter the number of elements in the array:");
    cin>>n;
    while(choice!=3){
        cout<<"Enter your choice:";
        cout<<"1.Enqueue\n2.Dequeue\n3.Display\n";
        cin>>choice;
        switch(choice){
            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;

            default: cout<<"Please enter a valid operation";
        };
    }
    return 0;
}