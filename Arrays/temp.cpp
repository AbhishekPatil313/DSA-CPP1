

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int>arr;
    vector<int>arr2;
    arr2.push_back(4);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(9);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);
    vector<vector<int>>v;
    v.push_back(arr);

    v.push_back(arr2);
    for(int i = 0; i < v.size();i++){
        if(arr==v[i])cout<<i;
    }
    cout<<"hello"<<endl;


}