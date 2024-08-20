#include<iostream>
using namespace std;

void selectionSort(int n , int arr[]){
    int min,i,j;
    for( i = 0 ; i< n-1 ; i++){
        min = i;
        for(int j = i+1 ; j< n ; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);

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
    selectionSort(n,arr);

    return 0;
}