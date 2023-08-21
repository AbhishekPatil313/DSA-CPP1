#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void count(int *arr,int n){
    unordered_map<int,int>map;
    for(int i = 0 ; i < n; i++){
        map[arr[i]]+=1;
    }
    int count=0;
    for(int i = 0 ; i < n ; i++){
        
            if(map[arr[i]]>1){
                count++;
            }
    }
    
}

void merge(int *arr1,int n1 , int *arr2 , int n2){
    vector<int>v;
 

     for(int i = 0 ; i < n1 ; i++){
            v.push_back(arr1[i]);
        
        }
       for(int i = 0 ; i < n2 ; i++){
            v.push_back(arr2[i]);
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i < v.size();i++){
            cout<<endl;
            cout<<v[i] <<" ";
        }
     
}
int main(){
    // int arr[12]={1,2,2,2,3,2,3,2,3,4,5,5};
    // count(arr,7);
    int t;
    int n1,n2;
    int arr1[100];
    int arr2[100];
    cin>>t;
    while(t--){
        cout<<"enter the size of arr1 :";
        cin>>n1;
        cout<<"enter the size of arr2 :";
        cin>>n2;
         arr1[n1];
         arr2[n2];
        for(int i = 0 ; i < n1 ; i++){
            cin>>arr1[i];
        }
          for(int i = 0 ; i < n2 ; i++){
            cin>>arr2[i];
        }

        merge(arr1,n1,arr2,n2);
    }
   
    
}