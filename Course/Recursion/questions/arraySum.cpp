#include<iostream>
using namespace std;


int arraySum(int arr[], int size){
    if (size == 0){
        return 0;
    } 
    int small = arraySum(arr+1,size-1);
    return small + arr[0];
}

int lastOcc(int *arr, int size, int target,int &index){
    if(size==0)return index;
    if(arr[0]==target){
            index=index;
    }
    
      int val=  lastOcc(arr+1,size-1,target,index);
      return val+1;
    

}

void solve(int *arr, int i , int &index,int size,int target){
    if(i>=size){
        return;
    }
    if(arr[i]==target){
        index=i;
    }
    solve(arr,i+1,index,size,target);
}

int main(){
    int arr[8]={2,8,2,2,2,2,8,2};
    int index=-1;
   int ans = lastOcc(arr, 8,8,0);
   cout<<"ans "<<ans<<endl;
    
    solve(arr,0,index,8,8);
    cout << index<< endl;
 

}