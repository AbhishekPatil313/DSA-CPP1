#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="abbatttccaa";
    //for(int i=0;i<s.length()-1;i++){
        int i=0;
        while(i<s.length()){
           if(s[i]==s[i+1] ){
            s.erase(i,2);
            i=-1;
           }
            i++;
        }
   // }
    cout<<s;
    return 0;
}