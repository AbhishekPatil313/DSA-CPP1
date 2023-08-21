#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){                             //using for loop
    for (int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if (arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}


void InsertionSort(int arr[],int n){                         //using while loop
    int i=1;
    while(i<n){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
        i++;
    }
}
int main(){
    int arr[5]={3,5,4,2,8};
    InsertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}