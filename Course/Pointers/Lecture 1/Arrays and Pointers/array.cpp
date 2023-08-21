#include<iostream>
using namespace std;
int main(){
    
    int a[5]={2,5,3,6,4};
    int *p=a;
    cout<<p<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*(a)<<endl;
    cout<<*(a+1)<<endl;       //pointer arithmetic
    cout<<*(a+3)<<endl;
    cout<<a[1]<<endl;
    cout<<1[a]<<endl;
    cout << sizeof(a) << endl;
    cout << sizeof(*p) << endl;
    cout << p << endl;
    p = p + 1; 
    p = a + 1;  
    cout<<*p<<endl;
    return 0;
}