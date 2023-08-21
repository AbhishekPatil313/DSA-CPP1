#include<iostream>
using namespace std;

int firstOcc(int arr[] , int n , int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int lastOcc(int arr[] , int n , int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if (arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[5]={1,3,3,3,35};
    int res = firstOcc(arr,5,3);
    int resl = lastOcc(arr,5,3);
    cout<<"First occurance of 3 is at index :"<<res<<endl;
    cout<<"Last occurance of 3 is at index :"<<resl<<endl;

    return 0;
}