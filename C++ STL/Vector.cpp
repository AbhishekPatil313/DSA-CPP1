// array::begin example
#include <iostream>
#include <array>
#include<vector>
using namespace std;
int main(){
    
    vector<int>v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(9);
    v.push_back(9);
    v.push_back(9);
    v.pop_back();
    
    cout<<"Capacity : "<<v.capacity()<<endl;
    for(int i:v){
        cout<<i<<endl;
            }

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    vector<int>v1(5,1);
    for(int i:v1){
        cout<<i<<" ";
            }
            cout<<endl;
    vector <int>v2(v1);
     for(int i:v2){
        cout<<i<<" ";
            }
    return 0;
}