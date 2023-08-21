#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=9;
    int *p=&i;
    *p=i;
    cout << *p << endl;
    cout<<sizeof(*p)<<endl;
    cout << p-> << endl; 
    
   
    return 0;
}