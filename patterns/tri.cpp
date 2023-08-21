#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j<n-i-1;j++){
            cout<<" ";
        }
        for(int p = 0 ; p<i+1 ;p++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 0 ;i<n;i++){
        for(int j = 0 ; j<i;j++){
            cout<<" ";
        }
        for(int p = 0 ; p<n-i;p++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < n-i-1; j++){
            cout<<" ";
        }
        for(int s = 0 ; s){

        }
        cout<<endl;
    }
}