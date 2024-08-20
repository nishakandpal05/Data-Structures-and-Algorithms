#include<iostream>
using namespace std ;

int linearSearch(int n,int arr[],int target){
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1 ; 

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

    int res = linearSearch(n,arr,target);

    if(res==-1){
       cout<<"Element not found";
        
    }
    else{
        cout<<"Element found at index ";
        cout<<res; 
    }
    return 0;
 }
