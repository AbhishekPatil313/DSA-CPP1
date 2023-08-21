#include<iostream>
#include<deque>
using namespace std;
int main(){
    int arr[5]={3,2,4,1,2};
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    deque<int> d;
    d.push_back(2);
    d.push_back(1);
    d.push_front(3);
    d.pop_back();
    d.pop_front();
    cout<<d.at(0)<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.erase(d.cbegin(),d.cend()-1);
    cout<<endl;
     for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}