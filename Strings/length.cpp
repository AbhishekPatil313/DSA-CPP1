#include<iostream>
//#include<string>
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
       return ch; 
}

else{ 
    char temp=ch-'A'+'a';
       return temp;
}
}


 char toUppercase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        char temp=ch-'a'+'A';
        return temp;
    }
 }
using namespace std;
int main(){
    char arr[5];
    cin>>arr;

    int count=0;
    for(int i=0;i<5;i++){
          if(arr[i]=='\0'){
            break;
    }
        count++;
      
    }
    cout<<count<<endl;


   int s=0;
   int  e=count-1;
 
   while(s<=e){
          swap(arr[s++],arr[e--]);
   }
   int flag=0;
  for(int i=0;i<count;i++){
    cout<<arr[i]<<" "<<arr[count-i-1]<<endl;
    if(toUppercase( arr[i])!=toUppercase(arr[count-i-1])){
        flag=1;
        break;
    }
  }
if(flag){
    cout<<"not Palindrome"<<endl;
}
else{
    cout<<"palindrome"<<endl;
}
cout<<toLowercase('A')<<endl;
cout<<toUppercase('?')<<endl;
   cout<<"after reverse :"<<arr;
}



