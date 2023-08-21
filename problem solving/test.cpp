#include <iostream>
#include <bits/stdc++.h>
using namespace std;






int main() {
	// your code goes here
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

    int actual=0;
        for(int i = 0 ; i < v.size() ; i++){
            actual = actual*10+v[i];
        }
        actual++;
		cout<<actual;
        // vector<int>a;
        // while(actual>0){
        //     int num = actual%10;
        //     a.push_back(num);
        //     actual=actual/10;
        // }
	return 0;
}