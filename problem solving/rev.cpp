#include<iostream>
using namespace std;
int main(){
    int a ;
    cin>>a;
    int ans=0;
    int last=0;
    while(a>0){
         last = a%10;
         ans = ans*10 + last;
         a=a/10;

    }
    cout<<ans;
}