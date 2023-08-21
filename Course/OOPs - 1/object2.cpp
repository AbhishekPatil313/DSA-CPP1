#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){

    Student s1(10,12);
    cout << &s1 << endl;

    Student s2(s1);        //copy constructor
    s1.display();
    s2.display();
}