#include<iostream>
#include<string.h>
using namespace std;
void RemoveX(char a[]){
    if (a[0] == '\0'){
        return;
    }
    RemoveX(a+1);
    if (a[0]=='x'){
        int i = 0;
        for ( ; a[i]!='\0'; i++){
            a[i] = a[i+1];
        }     
        a[i]='\0';
    }else{
    RemoveX(a+1);
     }
}
int main(){
    char a[100];
    cin>>a;
    RemoveX(a);
    cout << a << endl;
    return 0;
}