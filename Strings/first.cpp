#include<iostream>
#include<string>
using namespace std;
  string toLowerCase(string s ){
        string temp="";
        for(int i =0 ; i < s.length();i++){
            if(s[i]>='A' && s[i]<='Z')temp+=s[i]-'A'+'a';
            else temp+=s[i];
        }
        return temp;
    }
int main(){
    int n ;
    string s="race a car";
      string temp="";
        for(int i = 0; i < s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                temp+=s[i];
            }
        }
         temp=toLowerCase(temp);
        cout<<temp<<endl;
       string eq=temp;
       cout<<eq<<endl;
       int i = 0;
       int e = temp.size()-1;
       while(i<=e){
           swap(temp[i++],temp[e--]);
       }
         cout<<eq<<endl;
         cout<<temp<<endl;
         
 
}