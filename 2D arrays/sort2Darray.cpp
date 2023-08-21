#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[][3],int n){
  int sum=0;
        for(int i = 0 ; i < n;i++){
              sum=0;
            for(int j =0 ; j< n;j++){
                sum+=arr[j][i];
            }
            cout<<sum<<endl;
        }
}
int main(){
    int n=3;

    
     int arr[3][3];
    // int arr[3]={4,5,1};
    

     for(int i = 0 ; i < 3 ; i++){
         for(int j = 0 ; j < 3 ;j++){
          cin>>arr[i][j];
        }
     }
    // for(int i =0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    
    // for(int i  =0 ; i  < n;i++){
    //     for(int j= 0 ; j < n;j++){
    //     sort(arr[i],arr[i]+n);
    //  }
    // }

       for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    print(arr,3);
}