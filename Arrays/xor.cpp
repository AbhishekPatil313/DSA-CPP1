#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4};
    int ans=0;
    for (int i=0; i<5;i++){
       ans=ans^arr[i] ;
       
    }
cout<<ans<<endl;
           cout<<endl;
       cout<<endl;
       cout<<endl;

       for (int i=0; i<5;i++){
       
       cout<<arr[i]<<endl;
    }
//   cout<<endl;
//        for (int i=1; i<5;i++){
//        ans=ans^i ;
//        cout<<ans<<endl;
//        }
//        cout<<endl;
//        cout<<endl;
//        cout<<endl;
// cout<<ans;

    
    
    return 0;
}