#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,0,1,2};
   int left=0; 
   int right=4;
   int k=4;
   while(left<right ){
    while(arr[left]==0 && left<right){
      left++;
    }
    while(arr[right]==1 && left<right){
      right--;
    }
    // while(arr[left]==2 && left<right){
    //   left++;
    // }
    if (left<right){
      swap(arr[left],arr[right]);
      left++;
      right--;
    }
   }


int l=0;
int r=4;

      while(l<r ){
    while(arr[l]==0 && l<r){
      l++;
    }
    while(arr[r]==2 && l<r){
      right--;
    }
    if (l<r){
      swap(arr[l],arr[r]);
      l++;
      r--;
    }
   }


    for (int i=0;i<5;i++){
      cout<<arr[i]<<endl;
    }



    return 0;
}