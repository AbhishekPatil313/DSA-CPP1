#include<iostream>
#include<string>
#include <cstring>
using namespace std;
int main(){
    string p="45";
    string s="daabcbaabcbc";
    string str2="abc";
    //for(int i=0;s[i]!=' ';i++){
        int i=0;
//         while( s.find(str2)<s.length()){
//     s.replace(s.find(str2),str2.length(),"45");
//    }
         while( s.find(str2)<s.length()){
    s.erase(s.find(str2),str2.length());
   }
    cout<<s;
    return 0;
}