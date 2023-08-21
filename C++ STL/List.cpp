#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int >l;
    l.push_back(23);
    l.push_back(2);
    l.push_front(3);
    l.push_front(43);
    l.pop_back();
    l.pop_front();
    //cout<<l.at(3);        cannot get direct access too list elements
    for(int a:l){
        cout<<a<<" ";
    }
cout<<endl;
    l.erase(l.begin());
     for(int a:l){
        cout<<a<<" ";
    }
    return 0;
}