
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //char val='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char a= 'A' + i+j-1;
            a--;
            cout<<a;
            //val++;
            j++;
        }
        cout<<endl;
      
        i++;
    }


    return 0;
}