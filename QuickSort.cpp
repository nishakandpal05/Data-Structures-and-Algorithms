#include<iostream>
using namespace std;
void quickSort(int arr[] , int left , int right);
int partition(int arr[] , int left , int right);

int main(){
    int n ;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    quickSort(arr,0, n-1);
    cout<<"Sorted array:"<<endl;
    for(int i = 0 ; i<n ; i++){
            cout<<arr[i]<<endl;
        }
    return 0;
}

void quickSort(int arr[] , int left , int right){
    if(left<right){
        int index = partition(arr,left,right);
        quickSort(arr,left,index-1);
        quickSort(arr,index+1,right);
    }
}

int partition(int arr[] , int left , int right){
    //Randomized quick sort
    /*
    int m = right - left +1;
    int x = rand()%m+left;
    swap(arr[x],arr[right]);
    */
    int pivot = arr[right];
    int i = left-1;
    for(int j = left ; j<right ; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i] , arr[j]);
        } 
    }
    swap(arr[i+1], arr[right]);
    return i+1;
}