#include<iostream>
using namespace std;

class Student{

    public :
    int rollNumber;

    private:
    int age;

    public:
    Student (){
        cout << "Defaut constructor called ..."<< endl;
    } 
 
    Student (int rollNumber , int age){
        cout << "Parametried constructor called ..."<<endl;
      this ->  rollNumber = rollNumber;
      this ->  age = age;
      cout << this << endl; //holds the address of current object.
    }
    void setAge(int a){
        age = a;
    }

    int getAge(){
        return age;
    }

    int display(){
        cout << "Age :" << age <<endl;
        cout << "Roll Number :" << rollNumber << endl;
    }
};