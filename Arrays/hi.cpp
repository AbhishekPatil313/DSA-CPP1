#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int findKthPositive(vector<int>& arr, int k) {
        vector<int>v;
        unordered_map<int,int>seen;
        for(int i = 0; i< arr.size();i++){
            seen[arr[i]]+=1;
        }
        cout<<seen[arr[0]]<<endl;
        for(auto i : seen){
            cout<<i.first<<endl;
        }
        for(int i = 0; i  <arr.size();i++){
            if(seen.count(arr[i])>=1)continue;
                  v.push_back(i+1);
        }
        
      
    }
int main(){
vector<int>v;

// // v.push_back(2);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);
int  k = 5;
findKthPositive(v,k);
}