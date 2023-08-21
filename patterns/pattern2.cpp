// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//     for (int j=n;j>0;j--){
//         cout<<j;
//         }
//         i++;
//         cout<<"\n";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
       int  j=1;
        
     while(j<=n){
     cout<<count<<"  ";
     count+=1;
     j++;
     }
     cout<<endl;
      i++;
    }
    
    return 0;
}

