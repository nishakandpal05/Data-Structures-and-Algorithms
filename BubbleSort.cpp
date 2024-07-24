#include<iostream>
using namespace std;
void bubbleSort(int arr[] , int n);
void display(int arr[] , int n);

int main(){
    int n ;
    cout<< "Enter the number of elements in array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    display(arr,n);

    return 0;
}

void bubbleSort(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n-i-1 ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void display(int arr[] , int n ){
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<endl;
    }
}