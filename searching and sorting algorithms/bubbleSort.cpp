
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for (int i=1;i<n;i++){                           //in this algo at each round largest ele get sorted
        for(int j=0;j<n-i;j++){                      //condition of j<n-i is because - last element is 
                                                    // is getting sorted so no need to traverse .
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main (){
    int arr[5]={55,5,6,43,3};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}