#include<iostream>
using namespace std;
void heapSort(int arr[] , int n);
void heapify(int arr[] , int n , int i);

int main(){
    int n ; 
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    heapSort(arr , n);
    cout<<"Sorted array is :"<<endl;
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0 ;
}

void heapSort(int arr[] , int n){
    for(int i = n/2  - 1 ; i >= 0 ; i-- ){  //build heap
        heapify(arr , n , i);
    }
    //inserting the largest element at the last position of the array
    for(int i = n-1 ; i>= 0 ; i--){   //Extract element one by one
        swap(arr[0] , arr[i]);   //Move current root to end
        heapify(arr , n , 0);    //Heapify reduced heap
    }
}
// max heap 
void heapify(int arr[] , int n , int i){
    int largest = i;
    int left = 2*i + 1 ;
    int right = 2*i + 2;
    if(left<n && arr[left] > arr[largest]){     // for min heap arr[left]<arr[largest]
        largest = left ;
    }
    if(right < n && arr[right] > arr[largest]){  // for min heap arr[right]<arr[largest]
        largest = right ;
    }

    if(largest!=i){
        swap(arr[largest] , arr[i]);
        
    }
}