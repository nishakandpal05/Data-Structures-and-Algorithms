#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    //Inserting elements
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"Size of the queue is :";
    cout<<q.size();
    cout<<"\n";

    //Deleting elements from queue
    q.pop();
    cout<<"Size of the queue after deleting the front element is :";
    cout<<q.size();
    cout<<"\n";

    //Element present in the front 
    cout<<"Element present at the front :";
    cout<<q.front();
    cout<<"\n";

    if(q.empty()){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Queue is not empty";
    }

    
}