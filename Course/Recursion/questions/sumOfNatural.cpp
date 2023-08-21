#include<iostream>
using namespace std;
int sum (int n){
    if (n == 0){           // Base case 
        return 0;
    }
    int small = sum(n-1);     // recursive call
    return small + n;         // small calculation
}


int fact(int n){
    if (n == 1){
        return 1;
    }
    int small = fact(n-1);
    return n * small ;
}
int main(){
    int ans = sum(5);
    cout << ans << endl;
    int fac = fact(5);
    cout << fac << endl; 
    return 0;
}