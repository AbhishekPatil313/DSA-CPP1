#include<iostream>
using namespace std;
bool binarySearch(int arr[] , int size ,int ele , int si , int ei){
    if (si>ei)return false;
    int mid = (si + ei) /2;

    if (arr[mid]==ele){
        return true;
    }
    else if (arr[mid]<ele){
       binarySearch(arr,size,ele,mid+1,ei);
    }
    else {
        binarySearch(arr,size,ele,si,mid-1);
    }
    
}
int main(){
    int arr[5]={2,3,4,5,8};
    int element = 22;
    bool a = binarySearch(arr,5,element,0,4);
    cout << a << endl;
}