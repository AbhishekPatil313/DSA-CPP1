#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v,int start,int end,int target){
    if(start>end){
       return -1; 
    }
   int  mid=(start+end)/2;
    if(v[mid]==target)return mid;
    if(v[mid]>target){
        return binarySearch(v,start,mid-1,target);
    }
    else{
        return binarySearch(v,mid+1,end,target);
    }


}
int search(vector<int>v,int n){
    return binarySearch(v,0,v.size()-1,n);
}
int main(){

    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
 int ans= search(v,9);
 cout<<ans<<endl;

}