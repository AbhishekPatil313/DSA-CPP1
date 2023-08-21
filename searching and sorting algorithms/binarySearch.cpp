#include<iostream>
using namespace std;
//only works when array is in defined order 
//Time complexcity  :- O(log N)


int binarySearch(int ary[],int size , int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;                 //(start+end)/2;
    while(start<=end){
        if(ary[mid]==key){
            return mid;
        }
        if(ary[mid]<key){
            start=mid+1;    
        }
         if(ary[mid]>key){
            end=mid-1;    
        }
        mid=start+(end-start)/2;   //<-- to prevent it from out of int range          //(start+end)/2
    }
    return -1;
}
int main(){
    int odd_array[5]={12,13,45,65,433};
    int even_array[6]={23,34,55,67,88,96};
    int odd=binarySearch(odd_array,5,65);
    int even=binarySearch(even_array,6,96);
    cout<<"Element is at index :"<<odd<<endl;
    cout<<"Element is at index :"<<even<<endl;

    return 0;
}