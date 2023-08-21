#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=12;
    int *p=&i;
    cout << &i << endl; //Hexadecimal answer.
    cout<<p<<endl;
    cout<<*p << endl;
    int *q = p;
    //incrementing the ptr variable
    (*p)++;
    cout << *p <<endl;
    cout << i  << endl;
    cout << *q <<endl;
    int *s=0;
    cout<<"*s  = "<<*s;
    
    return 0;
}

