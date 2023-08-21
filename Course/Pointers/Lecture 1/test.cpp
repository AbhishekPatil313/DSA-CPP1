#include<iostream>
#include<string>
#include <typeinfo>

using namespace std;
int main(){
    int a = 10;
    int b = 11;
    int* p= &a;
    //cout << typeid(*p).name() << endl;
    cout << p->a;
    //*p =&b;
   // cout<<&a <<" " << p <<" "<< *p << endl;
}