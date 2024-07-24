#include<iostream>
using namespace std;
void insertionSort(int arr[] , int n);
void display(int arr[] , int n);

int main(){
    int n ;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    display(arr,n);
    return 0;
}

void insertionSort(int arr[] ,int n){
    int i,j;
    for(i = 1 ; i<n ; i++){
        int temp = arr[i];
        for( j = i-1 ; j>=0; j--){
            if(arr[j]> temp){
                arr[j+1]=arr[j];
            }
            else {
                break;
            } 
        }
        arr[j+1] =temp;
    }
}
    

void display(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}