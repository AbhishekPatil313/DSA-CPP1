#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int x, y;
        cin >> x >> y; 
        int side = sqrt(x);
        cout<<x<<" "<<side<<endl; 
        int area = side * side * y * y; 
        cout << area << endl; 
    }
    return 0;
}