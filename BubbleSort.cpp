#include<iostream>
using namespace std;

void bubbleSort(int n , int arr[]){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j< n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }

    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
   

}



int main(){
    int n ; 
    cout<<"Enter the number of elements in the array :\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array :\n";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    bubbleSort(n,arr);

    return 0;
}