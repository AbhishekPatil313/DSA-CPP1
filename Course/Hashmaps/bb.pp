#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size -1 ;
     int mid = start+ (end-start) / 2;
     while(){
        if (arr[mid] == key){
            return mid;

        }
        if (arr[mid]<key){
            start = mid + 1;

        }
        if(arr[mid]>key){
            end= mid -1;
        
        }
        mid=start + (end-start)/2;
     }
     return -1;

}

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;
    
}