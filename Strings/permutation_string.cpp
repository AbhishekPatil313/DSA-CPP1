#include<iostream>
#include<string>
#include <cstring>
bool com(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
               return 0;
               }
    }
    return 1;
}
using namespace std;
int main(){
    string s1="ab";
    string s2="eidbaoo";
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }

    //cheaking for first window
    int i=0;
    int count2[26]={0};
    int win_size=s1.length();
    while(i<win_size){
        int count = s2[i]-'a';
        count2[count]++;
        i++;
    }
    if(com(count1,count2)){
        cout<<"Yes";
    }

    while(i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;

        int oldnum=s2[i - win_size]-'a';
        count2[oldnum]--;

        i++;
        if(com(count1,count2)){
        cout<<"Yes";
    }

    }
    return 0;
}