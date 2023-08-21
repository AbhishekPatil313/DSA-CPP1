// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int print(int i) {
//     return i;
// }

// float print(float f) {
//     return f;
    
// }

// int main() {
//     float a=50.0;
//     print(5);
//     print(a);
//     //print(4.4); this produces a error as it's type becomes double.
    
 
//     cout << typeid(a).name() << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int add(int x, int y=0, int z = 0, int w = 0) {
    return (x + y + z + w);
}
int main() {
    cout << add(10) << endl;
    cout << add(10, 20, 30) << endl;
    cout << add(10, 20, 30, 40) << endl;
    return 0;
}