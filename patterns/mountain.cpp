
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
    int spc1=n-i;
    while(spc1){
        cout<<" ";
        spc1--;
    }
    int mon1=1;
    while(mon1<=i){            //montain 1
        cout<<"* ";
        mon1++;
    }

    int spc2=n-i;
    while(spc2){
        cout<<" ";
        spc2--;
    }

    //mountain 2 start

    int spc3=n-i;
    while(spc3){
        cout<<" ";
        spc3--;
    }

    int mon2=1;
    while(mon2<=i){
        cout<<"* ";                 //mountain 2
        mon2++;
    }

 cout<<endl;
    i++;
    }

   
    //reverse mountain start
int rev=1;
while(rev<=n){

    int rspc1=rev;
    while(rspc1){
        cout<<" ";
        rspc1--;
    }


    int rmon1=n-rev;
    while(rmon1){
                 cout<<"* ";  
                 rmon1--;                                     //reverse montain 1
    } 

    int rspc2=rev;
    while(rspc2){
        cout<<" ";
        rspc2--;
    }

    int rspc3=rev;
    while(rspc3){
        cout<<" ";
        rspc3--;
    }

    int rmon2=n-rev;
    while(rmon2){
                 cout<<"* ";  
                 rmon2--;                                     //reverse montain 2
    } 
    cout<<endl;
    rev++;
}
    return 0;
}