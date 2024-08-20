#include<iostream>
using namespace std;

int binarySearch(int arr[] , int target , int low , int high){
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            return binarySearch(arr,target,mid+1,high);
        }
        else{
            return binarySearch(arr,target,low,mid-1);
        }
    }
    return -1;
}

int main(){
      int n ;
    cout << "Enter the number of elements :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements :\n";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int target ;
    cout<<"Enter the element to be searched :\n";
    cin>>target;

    int low = 0 , high = n-1;

    int res = binarySearch(arr,target,low,high);

    if(res==-1){
       cout<<"Element not found";
        
    }
    else{
        cout<<"Element found at index ";
        cout<<res; 
    }
    

    return 0;
}
