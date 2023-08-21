#include<iostream>
#include<string>
using namespace std;
int main(){
    char atr[]= "Hiii this is abhi" ;
    cout << atr[0] << endl;
    cout << *atr << endl;
    cout << atr << endl;

    char *p = atr;
    cout << *p << endl;
    cout << &p << endl;
    cout << p << endl;



    char ch='a';
    char *ptr = &ch;
    ch++;
    cout<<*ptr;
    cout<< ch;
    return 0;
}