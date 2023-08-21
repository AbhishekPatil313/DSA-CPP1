#include<iostream>
using namespace std;
// odd = 2n+1 or 2n-1
// even 2n
int main(){
    int n;
    cin>>n;
       for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < n-i; j++){
            cout<<i+1;
           if(j!=n-i-1)cout<<" * ";
        }
   cout<<endl;
    }
    for(int i = 0 ; i < n; i++){
        int j = 0 ;
        for(; j<i+1 ;j++){
            cout<<j+1;
        }
         j=j-1;
        for(;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}