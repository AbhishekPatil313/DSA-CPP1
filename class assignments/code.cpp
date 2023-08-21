#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ages, diff;
cin>>ages>>diff;
    int arr[ages];
    
    for(int i = 0 ;i < ages;i++){
            cin>>arr[i];
    }
    int count=0;
    for(int i = 0 ; i < ages; i++){
        for(int j = 0 ; j<ages&& j!=i; j++){
            if (abs(arr[j]-arr[i])==diff)count++;
        }
    }
    cout<<count<<endl;
}