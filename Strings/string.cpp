#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverse(int start,int end,char ch []){
       while(start<=end){
        swap(ch[start++],ch[end--]);
       } 
}
int main(){
//============================printing string in reverse order ===================================================================
    string s="abhishek is good is the best medicine";
    
    int target=s.length();
    string ans;
      for(int i=s.length();i>=0;i--){
               if(s[i]==' '){
                for(int j=i+1;j<target;j++){
                    cout<<s[j];      
                    ans.push_back(s[j]);            
                } 
                target=i;
                //cout<<" ";
                ans.push_back(' ');
               }
      }
      
      for(int i=0;s[i]!=' ';i++){
        cout<<s[i];
        ans.push_back(s[i]);
        
      }
cout<<endl;
cout<<ans<<endl;
//====================================================================================================

      cout<<endl;
      cout<<endl;


    
    char ch[]={'a','b','h','i',' ','i','s',' ','i','s','\0'};
    // cout<<"Enter the characters";
    // cin>>ch;
 // cout<<ch;
//string s;
int start=0;
int c;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            reverse(start,i-1,ch);
            
            start=i+1;
        }   
        c=i;
        }
        reverse(start,c,ch);
       
  
       
    
   // cout<<ch;
    return 0;
}
