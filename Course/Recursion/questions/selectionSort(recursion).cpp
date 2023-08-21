
#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    if(n==0 || n == 1)return;
    int min = 3453523;
    for (int i = 0 ; i < n ; i++){
        if(arr[i] < min){
            min=i;
        }
    }
    swap(arr[i],arr[min]);
    return selectionSort(arr+1,n-1);
    
}
int main(){
    int arr[5]={2,3,1,3,54};
    selectionSort(arr,5);
    for (int i = 0 ; i < n ; i++){
        cout  << arr[i] <<" ";
    }
}