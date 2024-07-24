#include<iostream>
using namespace std;
int linearSearch(int arr[], int n , int target);

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
    cout<<"Enter the element to be searched:"<<endl;
    cin>>target;
    int result = linearSearch(arr , n , target);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at"<<result<<endl;
    }
    return 0 ;
}

int linearSearch(int arr[] , int n , int target){
    n--;
    if(n<0){
        return -1 ;
    }
    if(arr[n] == target){
        return n ;
    }
    return linearSearch(arr , n , target);
}