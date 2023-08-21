#include<iostream>
using namespace std;

void  print(int n){
    //write your code here
    if (n == 0)return;
     print(n-1);
     cout << n;
 
}

int recur(int n ){
    if(n == 0){
        return 0 ;
    }
    int sm = recur(n / 10);
    int ans=sm + 1;
    //ans+=1;
    return ans;
}

int main () {
    int n ;
    //cin >> n;
   //int a = fact(n);
    //cout << a;

  //  print(4);
    //power(2,4);
    int ans = recur(12234);
    cout << ans << endl;
    return 0;
}