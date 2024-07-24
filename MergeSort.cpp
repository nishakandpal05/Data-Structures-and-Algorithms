#include<iostream>
using namespace std;
void mergeSort(int arr[] , int left , int right);
void merge(int arr[] , int left , int mid , int right);

int main(){
    int n ;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0, n-1);
    cout<<"Sorted array:"<<endl;
    for(int i = 0 ; i<n ; i++){
            cout<<arr[i]<<endl;
        }
    return 0;
}

void mergeSort(int arr[] , int left , int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

void merge(int arr[] , int left , int mid , int right){
    int n1 = mid - left +1;
    int n2 = right-mid;
    int a[n1],b[n2];
    int k = 0 ;
    for(int i = left ; i<= mid ; i++){
        a[k]=arr[i];
        k++;
    }
    k =0;
    for(int i = mid+1 ; i<=right ; i++){
        b[k]=arr[i];
        k++;
    }
    int i = 0 , j = 0;
    k = left;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
    while(j<n2){
        arr[k++] = b[j++];
    }
}