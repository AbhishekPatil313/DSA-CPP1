#include<iostream>
using namespace std;
int main(){
    int i = 10;
    int &j = i;
    j++;
    i++;
    cout << i << endl;
    cout << j << endl;
    cout << &i << endl;
    cout << &j << endl;
    return 0;
}