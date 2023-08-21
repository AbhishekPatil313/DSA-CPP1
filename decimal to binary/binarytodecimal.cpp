#include<iostream>
#include<math.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//       int i=0;
//       int ans=0;
//     while(n!=0){

//       int bit=(n&1);
//       ans=bit*pow(10,i)+ans;
//       n=n>>1;
//       i++;
//     }
//     cout<<ans;

// }

int decimalToBinary(int n){
    int digit=0;
    int ans=0;
    int i=0;
    while(n!=0){
        digit=n%10;
        ans=digit*pow(2,i)+ans;
        n=n/10;
        i++;
    }
    return ans;
}

int BinaryStringToInteger(string s){
    int a = 0;
    for(int i = 0 ; i<s.length();i++){
        a=a*10+s[i]-'0';
    }
    return a;
}
int main(){
    // int n;
    // cin>>n;
    // int digit=0;
    // int ans=0;
    // int i=0;
     string s="1010";

    // int a = 0;
    // for(int i = 0 ; i<s.length();i++){
    //     a=a*10+s[i]-'0';
    // }
    
    //  int a = BinaryStringToInteger(s);
    //  int val = decimalToBinary(a);
    //  cout<<val<<endl;
    // while(n!=0){
    //     digit=n%10;
    //     ans=digit*pow(2,i)+ans;
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans;
  cout<<'0'+'a';
      return 0;
}