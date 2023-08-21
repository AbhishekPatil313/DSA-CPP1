#include<iostream>
using namespace std;
int fibo (int a){
    if (a == 0 || a == 1){
        return a;
    }
    int small = fibo(a-1);
    int sm = fibo(a-2);
    int ans = small + sm ;
    return small + sm;
}

int main(){
    int a = fibo(6);
    cout << a << endl;
    return 0;
}