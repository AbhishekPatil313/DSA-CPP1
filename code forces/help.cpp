#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


int n ;
cin>>n;
int ans =n;
while(true){
  unordered_map<int,int>seen;
  ans+=1;
  n=ans;

  int u=n%10;
  seen[u]+=1;
  n=n/10;

  int t=n%10;
   seen[t]+=1;
  n=n/10;
  //  cout<<t<<endl;
  int hun=n%10;
   seen[hun]+=1;
  n=n/10;
 // .//  cout<<hun<<endl;
  int th =n%10;
   seen[th]+=1;
     //cout<<th<<endl;
     //cout<<ans<<endl;
  if(seen.size()==4){
      cout<<ans<<endl;
    break;
  }

}






}