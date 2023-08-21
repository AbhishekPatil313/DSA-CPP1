#include<iostream>
using namespace std;
int binarySearch(int *arr , int n ,int target){
    int start = 0;
    int end = n-1;
    int mid = 0;
    while(start<=end){
        mid=(start+end)/2;
        
        if(arr[mid]==target){
            
            return mid;
            }
        else if(arr[mid]>target){
            
            end=mid-1 ;
        }
        else {
            
            start=mid+1;
        }
    }
}
int main(){
    int arr[]={1,2,8,9,12,22};
    int index = binarySearch(arr,6,2);
     cout<<index<<endl;
}