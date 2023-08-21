#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


void count(int *arr,int n){
    unordered_map<int,int>map;
    for(int i = 0 ; i < n; i++){
        map[arr[i]]+=1;
    }
    int c=0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=-1){
            if(map[arr[i]]>1  ){
                 arr[i]=-1;
                c++;
            }
        }
    }
cout<<c<<endl;
}


int main(){

     int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter the size of arr";
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    count(arr,n);
    }
        
    return 0;

}