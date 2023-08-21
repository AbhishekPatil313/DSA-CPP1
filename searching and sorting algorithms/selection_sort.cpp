#include<iostream>
using namespace std;
void selectionSort(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;                                 //searching the minimum element from the array.
            }
        }
        swap(arr[min],arr[i]);

    }
}
int main(){
    int arr[5]={8,2,4,3,5};
    selectionSort(arr,5);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}