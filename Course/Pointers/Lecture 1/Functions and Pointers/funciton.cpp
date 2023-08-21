#include<iostream>
using namespace std;

void print(int *p){
    *p= *p + 1 ;
    cout<<*p<< endl;
}
int main(){
    int a = 10;
    int *s = &a;
    cout<< a << endl;
    print(*s);   // doubt 
    cout << a << endl;     
    return 0;
}