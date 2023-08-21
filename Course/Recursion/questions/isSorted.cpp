#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if (size == 0 || size == 1)return true;

    bool ans = isSorted(arr+1,size-1);
    if (ans){
        if(arr[0]>arr[1])return true;
        else{return false;}
    }

}

bool issorted(int arr[],int size){
    if (size == 0 || size == 1)return true;

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1,size-1);
    }
//return ans;   

}

int main(){
    int arr[5]={2,2,3,4,5};
    bool ans = issorted(arr, 5);
    if(ans){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not Sorted" << endl;
    }

}