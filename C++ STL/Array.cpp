#include <algorithm>
#include <iostream>
#include <string>
#include <array>
using namespace std;
int main (){
    int basic[]={2,4,3,3,4};
    array<int,3>a={1,2,3};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index:"<<a.at(2)<<endl;
    cout<<"Element at 0th index:"<<a.at(0)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<"Is array a is empty or not :"<<a.empty()<<endl;
    cout<<get<0>(a)<<endl;
    cout<<get<1>(a)<<endl;
    cout<<get<2>(a)<<endl;
    for_each(a.crbegin(), a.crend(), print);
    return 0;
}