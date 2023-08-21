#include<iostream>
#include<string>
using namespace std;
int getmax(string s){
   int arr[26]={0};
   for(int i=0;i<s.length();i++){
            int ch= s[i]-'a';
            arr[ch]++;
   }
   int max=-1,ans=0;
   for(int i=0;i<26;i++){
    if(max<arr[i]){
        ans=i;
        max=arr[i];
    }
   }

   char finalans=ans+'a';
   cout<<finalans;

}
int main(){
    string s;
    cin>>s;
    int ar[5]={1,3,2,4,5};
    int max=-1;
    for(int i=0;i<5;i++){
        if(max<ar[i]){
            max=ar[i];
        }
    }
    cout<<max;
    getmax(s);
}