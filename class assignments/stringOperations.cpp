#include<iostream>
#include<string>
using namespace std;

int len(string s){
    int count = 0;
    for(int i = 0  ; i < s.size(); i++){
        count++;
    }
    return count;
}

 void cpy(string &dest , string &prev){
   if(dest.size()>0){
      dest="";
   }
    for(int i =  0 ; i < prev.size();i++){
        dest+=prev[i];
    }

 }

  void concate(string &dest , string &prev){
    for(int i =  0 ; i < prev.size();i++){
        //dest=dest + (*(prev+i));
        cout<<*(prev+i);
    }
    
 }

 int compare(string str1 , string str2){
    if(str1.size() > str2.size()){
        return 1;
    }
    return 0;
 }

 void reverse (string &s){
    int i = 0 ; 
    int j = s.size()-1;
    while(i<j){
       swap(s[i++],s[j--]);
    }
 }


 int main(){
    string s1 = "hello";
    string s2 = "hello world";
   //  string temp="";
   //  int l = len(s1);
   //  cpy(temp,s1);
    concate(s1,s2);
    cout<<s1<<endl;
   //  cout<<temp<<endl;
   //  cout<<l<<endl;
   //  string a = "how are you ";
   //  reverse(a);
    //cout<<a<<endl;
    return 0;
 }