#include<iostream>
using namespace std;

void merge(int arr[] , int start , int end){
    int mid = (start+end)/2;
    int len1 = mid-start+1;
    int len2 = end - mid;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    int mainIndex = start;

    //copy the values seperately
    for (int i = 0 ; i < len1 ; i++){
        arr1[i]=arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for(int j = 0 ; j<len2; j++){
         arr2[j]=arr[mainIndex++];
    }

    int count1 = 0;
    int count2 = 0;
    int ind = start;

    while(count1<len1 && count2<len2){
        if(arr1[count1]<arr2[count2]){
            arr[ind++]=arr1[count1++];
        }
        else{
            arr[ind++]=arr2[count2++];
        }
    }
    while(count1<len1){
         arr[ind++]=arr1[count1++];
    }
    while(count2<len2){
         arr[ind++]=arr2[count2++];
    }
        
}
void mergeSort(int arr[], int start , int end){
    if (start>=end)return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
    int n = 16;
    int arr[n]={200,3,432,4231,2,3,234,423,345,2,345,12,4,2,4,3};
    mergeSort(arr,0,n-1);
    for (int i = 0 ; i<n ; i++){
    cout << arr[i] <<" ";
    
    }
}