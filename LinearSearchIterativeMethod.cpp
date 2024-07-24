#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target);

int main(){
    int n , i;
    cout<<"Enter the number of elements of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to be searched:"<<endl;
    cin>>target;
    int result = linearSearch(arr , n , target);
    if(result == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at :"<<result<<endl;
    }
    return 0;
}

int linearSearch(int arr[], int n , int target){
    for(int i = 0 ; i< n ; i++){
        if(arr[i] == target){
            return i+1 ; 
        }
        
    }
    return -1 ;
}
