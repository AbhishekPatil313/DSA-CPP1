#include<iostream>

using namespace std;
#include "Stack.cpp"
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    
    return 0;
}