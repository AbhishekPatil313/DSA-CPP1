#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>a;
int p = 1;
int &pp=p;
cout<<p<<endl;
pp+=1;
cout<<pp<<endl;
a.push_back(12);
a.push_back(23);

cout<<*first<<endl;
cout<<a[0];
cout<<" "<<a.front()<<endl;
int &aa = a.front();
aa+=1;
cout<<a[0]<<endl;
}