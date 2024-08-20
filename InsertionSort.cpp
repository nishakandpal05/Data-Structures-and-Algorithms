#include<iostream>
using namespace std;

void insertionSort(int n , int arr[]){
    int i,j;
    for(i =1 ; i < n ; i++){
        int temp = arr[i];
        for(j = i-1 ; j>=0 ; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"\n";
    }
}

int main(){
    int n ; 
    cout <<"Enter the number of elements int the array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    insertionSort(n,arr);

    return 0;


}