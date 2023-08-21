#include<iostream>
#include<bits/stdc++.h>

using namespace std;
   bool wordPattern(string pattern, string s) {
        vector<string>v;
        for(int i =0 ; i < s.size();i++){
            string temp="";
            if(s[i]!=' ')temp+=s[i];
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
        }
        unordered_map<char,string>seen;
        for(int i = 0 ;i < pattern.size();i++){
            if(seen.count(pattern[i])>0){
                if(seen[pattern[i]]!=v[i])return false;
            }
            else{
            seen[pattern[i]]=v[i];
            }
            
        }
        return true;
    }
int main(){
  string pattern = "abba";
  string s = "dog cat cat goh";
  cout<<wordPattern(pattern,s);
}