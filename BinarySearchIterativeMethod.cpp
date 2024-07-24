#include<iostream>
using namespace std;
int binarySearch(int arr[] , int low , int high , int target);

int main(){
    int n ;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target ;
    cout<<"Enter the element you want to search:"<<endl;
    cin>>target;
    int result = binarySearch(arr , 0 , n-1 , target);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at :"<<result<<endl;
    }
    
    return 0;
    
}

int binarySearch(int arr[] , int low , int high , int target){
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            return mid ;
        }
    
        else if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    
    } 
    return - 1 ;   
    
}
