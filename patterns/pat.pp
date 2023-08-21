
#include<iostream.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){

        j=1;
        val=i;
        while(j<=i){
            cout<<val;
            val--;
            j++;
        }
        i++;
    }


    return 0;

}