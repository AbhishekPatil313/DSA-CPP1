#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int minTargetSum(int *arr,int target,int n){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i = 0 ; i <n ;i++){
      int ans =  minTargetSum(arr,target-arr[i],n);
      if(ans!=INT_MAX){
        mini = min(mini,ans);
      }
      
    }
    if(mini==INT_MAX)return mini;
    return mini+1;
}
void solve(string&s , int i  ,int size,string output){
    if(i>=size){
        cout<<output<<endl;
        return;
    }
    solve(s,i+1,size,output+s[i]);
    solve(s,i+1,size,output);
}
void printSubsequences(string s){
    int i= 0;
        string output="";
    int n=s.size();
    solve(s,i,n,output);
}
int main(){
    string abc ="abcdefg";
int arr[3]={1, 0,2};
//cout<<arr[6]<<endl;
int ans = minTargetSum(arr,3,3);
cout<<ans<<endl;
    // printSubsequences(abc);

}