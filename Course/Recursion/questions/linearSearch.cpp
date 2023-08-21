#include<iostream>
using namespace std;
int linearSearch(int arr[],int size , int ele){
    if (size==0)return -1;
    if (arr[0]==ele){
        return 0;
    }
    int small = linearSearch(arr+1,size-1,ele);
    if (small ==-1)return -1;
    else {return small+1;}
}

int linear(int arr[],int size , int ele){
   
    if (size==0)return -1;
    int sm = linear(arr+1,size-1,ele);
    if (arr[0]==ele){
        return 0;
    }
    if(sm == -1 )return -1;
    return sm+1;

}

bool linearBSearch(int arr[],int size , int ele){
    if (size == 0){
        return false;
    }
    else if (arr[0]==ele){
        return true;
    }
    else{
        return linearBSearch(arr+1,size-1,ele);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int ans = linear(arr,5,59);
   // bool isPresent = linearBSearch(arr,5,0);
  //  cout  << isPresent << endl;
    cout << ans  << endl;
}