#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int n){
    int sum=0;
    while(n>0){
        if(n&1){
            sum+=1;
        }
        n>>1;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}