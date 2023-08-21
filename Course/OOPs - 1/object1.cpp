#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){

// Static Allocation 
    Student s1;
    s1.setAge(34);
   cout <<  s1.getAge()<<endl;

   Student s2;
   cout << s2.getAge() << endl;

    Student s4(100,100);
    s4.display();

//Dynamic allocation

   cout << endl;
   cout << endl;
   cout << endl;

   Student *s3 = new Student(30,30);
   s3 -> display();


   
}