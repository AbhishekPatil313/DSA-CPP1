#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        
        if(a<=50)cout<<"LEFT"<<endl;
        else if (a>100||a<1){
            cout<<"SEAT NO. IS INVALID"<<endl;
        }
        else cout<<"RIGHT"<<endl;
    }
    
}