#include<iostream>
using namespace std;
void selectionSort(int arr[] , int n);
void display(int arr[], int n);

int main(){
    int n ; 
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i< n ;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    display(arr,n);
    return 0;
}

void selectionSort(int arr[], int n){
    int i ,j, min;
    for( i = 0 ; i< n-1 ; i++){
        min = i ;
        for( j = i+1 ; j<n ; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

void display(int arr[] , int n){
    cout<<"Sorted array:"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<endl;
    }
}