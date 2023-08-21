#include<iostream>
using namespace std;
#include "Pair.cpp"
int main(){
    Pair<Pair<int,int>,int>p2;
    Pair<int , int >p1;
    p1.setX(23);
    p1.setY(24);
    p2.setX(p1);
    p2.setY(33);
    cout<<p2.getX().getX()<<" "<<p2.getX().getY()<<endl;
    cout<<p2.getY()<<endl;
}