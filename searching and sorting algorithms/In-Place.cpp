//this algo don't need extra space and produces output in same memory.
//space complexity is reduced from O(n) to O(1)
#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    for (int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main (){
    int arr[5]={55,5,43,3};
    reverseArray(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}