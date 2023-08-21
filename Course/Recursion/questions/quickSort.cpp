#include<iostream>
using namespace std;

int partition(int arr[] , int s , int e){
    int count = 0;
    int pivot = arr[s];
    for(int i = s+1 ; i <= e ; i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<arr[pivotIndex]){i++;}

        while(arr[j]>arr[pivotIndex]){j--;}

        if(i<pivotIndex && j>pivotIndex)
        swap(arr[i++],arr[j--]); 
    }

    return pivotIndex;
}

void quickSort(int arr [] , int start , int end){
    if(start>=end)return ;
    int p = partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int n = 10;
    int arr[n]={2,4,2,1,4,5,7,3,0,-10};
    quickSort(arr,0,n-1);
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}