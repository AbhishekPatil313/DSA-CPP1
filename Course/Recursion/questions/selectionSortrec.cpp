
#include<iostream>
using namespace std;

void selectionSort(int arr[],int n,int p){
    if(n==p)return;

    int i = 0;
 
    for ( ; i < n-1 ; i++){
        if(arr[i] < arr[p]){
            p=i;
        }
    }
    swap(arr[p],arr[i]);
    return selectionSort(arr,n,p+1);
    
}
int main(){
    int arr[5]={2,3,1,3,54};
    selectionSort(arr,5,0);
    for (int i = 0 ; i < 5 ; i++){
        cout  << arr[i] <<" ";
    }
}