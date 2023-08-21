#include<iostream>
using namespace std;

int length(string s){
    int count=0;
    for(int i = 0 ;s[i]!='\0';i++){
        count++;
    }
    return count;
}
string copy(string s1 , string s2){
    for(int i = 0 ; i<s2.length();i++){
        s1+=s2[i];
    }
    return s1;
}
string reverse
int main(){
string s="dsada";
string s1="234";
cout<<length(s)<<endl;
cout<<copy(s,s1);

}