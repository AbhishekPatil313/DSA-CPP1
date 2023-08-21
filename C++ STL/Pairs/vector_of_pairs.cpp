#include<iostream>
#include<utility>
#include<bits/stdc++.h>

using namespace std;
void printVec(vector<pair<int,int>>&p){
    for(int i = 0 ; i < p.size() ;i++ ){
        cout<<p[i].first <<" "<<p[i].second<<endl;
    }

}
int main(){
    vector<pair<int,int>>p;
    vector<pair<int,int>>p={{3,3},{4,6},{8,9}};
    printVec(p);
    int n;
    cin>>n;
    for(int i =  0 ; i<n;i++){
        int x ,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    printVec(p);
}