#include<iostream>
using namespace std;
int main(){
    int a = 'and';
    int *p = &a;
    char *pc = (char*)p;

    cout << pc << endl;
    cout << *pc << endl;
    return 0;
}