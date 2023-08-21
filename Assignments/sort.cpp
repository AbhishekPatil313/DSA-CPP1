#include<iostream>
#include<bits/stdc++.h>

using namespace std;  
    

    
    string sortSentence(string s) {
         vector<string>v;
         vector<int>nums;
         string p="";
         string sp="";
         for(int i = 0 ; i < s.length();i++){
            
             if(s[i]!=' '){
                
                 sp+=s[i];
               
             }
             if(s[i]==' '){v.push_back(sp);
             sp="";
             }

          
    }
    v.push_back(sp);
    

    for(int i = 0 ; i < v.size();i++){
     string temp = v[i];
      cout<<temp<<endl;
        int num=temp[temp.length()-1]-'0';
      
       nums.push_back(num);
    }
    map<int,string>seen;
    for(int i = 0; i< v.size();i++){
        seen[nums[i]]=v[i];
    }
    string ans="";
    for(auto i : seen){
        (i.second).pop_back();
        ans+=i.second;
        ans+=" ";
   
    }
    ans.pop_back();

   return ans;
    }


    int main(){
        string s="is2 sentence4 This1 a3";
        string ans=sortSentence(s);
        cout<<ans<<endl;
    }