#include<iostream>

#include "Student.cpp"
using namespace std;


int main(){
    Student s1;
    s1.setAge(21);
    s1.rollNumber = 18;
    cout << "Age is : "<< s1.getAge() << endl;
    cout << "Roll NO is : " << s1.rollNumber << endl;





    Student *s2 = new Student;
    
    s2->setAge(54);
    (*s2).setAge(43);
    s2->rollNumber=32;
    cout << "Dynamic Allocation " << endl;
    cout <<"Age is : " << s2->getAge() << endl;
    cout <<"Roll Number is :"<<  s2->rollNumber << endl;

}