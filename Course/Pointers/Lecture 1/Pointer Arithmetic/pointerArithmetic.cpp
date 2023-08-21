#include<iostream>
#include<string>
using namespace std;
int main(){
    int a = 3;
    int* b=&a;
    b=b+1;
    cout << a << "  " << *b <<endl;
    return 0;
}