#include<iostream>
using namespace std;
#include "Fraction.cpp"
int fun (int a){
   
    a++;

return a;
}
int main(){
    // Fraction f1(10,2);
    // Fraction f2(10,28);
    // Fraction f3 ;
    // f3= f1 + f2 ;      // operator overloading ...
    // Fraction f5 = f1*f2;
    // f5.print();
    // f3.print();
    // f1.print();
    //    if (f1==f2){
    //         cout << "They are equal " <<endl;

    //     }
    //     else {
    //         cout << "They are not equal " << endl;
    //     }
    int a = 1;
    fun(a);
    //cout << b << endl;
    Fraction f1(10,2);
    Fraction f3 = ++(++f1);
    //++f1;
    f1.print();
    f3.print();
    //++(++ f1);
   // f1.print();
}