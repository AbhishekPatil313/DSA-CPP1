#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={1,3,4,2,4,2,2,2,2,2,2,2,2};
    auto low = lower_bound(arr,arr+13,2);
    cout<<*low<<endl;
    return 0;
}