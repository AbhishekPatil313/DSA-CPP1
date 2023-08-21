 #include<iostream>
#include "Node.cpp"
using namespace std;
 
 
 int remove_duplicate(int a[],int n){
    
        int count = 0;
        for (int i = 0 ; i< n ; i++){
            if (a[i-1]!=a[i]){
                count++;
            }
        }
        return count;
        // int res=1;
        // for(int i=1;i<5;i++){
        //     if(a[res-1]!=a[i]){
        //         a[res]=a[i];
        //         res++;
        //     }
        // }
        // return res;
    }


    int main(){
        int arr[5]={2,2,2,2,2};
        int ans = remove_duplicate(arr,5);
        // for (int i = 0; i< 5 ; i++){
        //     cout << arr[i] <<endl;
        // }
        cout << ans << endl;
    }