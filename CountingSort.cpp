#include<iostream>
using namespace std ; 
void countingSort(int arr[] , int n , int max);

int main(){
    int n ;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    countingSort(arr , n , max);
    cout<<"Sorted array is:"<<endl;
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0 ;
}

void countingSort(int arr[] , int n , int max){
    int count[max+1];
    memset(count, 0, sizeof(count));
    for(int i = 0 ; i< n ; i++){
        count[arr[i]]++;
    }
    for(int i = 1 ; i <= max ; i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i = n-1 ; i >= 0; i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i = 0 ; i< n ; i++){
        arr[i] = output[i];
    }
}