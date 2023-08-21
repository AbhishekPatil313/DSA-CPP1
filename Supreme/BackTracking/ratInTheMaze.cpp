#include<iostream>
#include<bits/stdc++.h>
#define N 3
using namespace std;

bool isSafe(int i , int j ,int n , int arr[N][N],vector<vector<bool>>&visited){
    if(((i>=0 && i<n)&& (j>=0 && j<n))&&(arr[i][j]==1)&&(visited[i][j]==false)){
        return true;
    }
    return false;
}
void solveMaze(int arr[N][N],int n,int i , int j ,vector<vector<bool>>&visited,string output,vector<string>&path ){
    if(i==n-1 and j==n-1){
        path.push_back(output);
        return;
    }
    //d
    if(isSafe(i+1,j,n,arr,visited)){
        visited[i+1][j]=true;
        output.push_back('D');
        solveMaze(arr,n,i+1,j,visited,output,path);
        output.pop_back();
         visited[i+1][j]=false;
    }
    //l

   if(isSafe(i,j-1,n,arr,visited)){
        visited[i][j-1]=true;
        output.push_back('L');
        solveMaze(arr,n,i,j-1,visited,output+'L',path);
        output.pop_back();
        visited[i][j-1]=false;
    }


    //r

   if(isSafe(i,j+1,n,arr,visited)){
        visited[i][j+1]=true;
        solveMaze(arr,n,i,j+1,visited,output+'R',path);
        visited[i][j+1]=false;
    }


    //u

       if(isSafe(i-1,j,n,arr,visited)){
        visited[i-1][j]=true;
        solveMaze(arr,n,i-1,j,visited,output+'U',path);
        visited[i-1][j]=false;
    }
}
int main(){
   int n=3;
    int arr[3][3]={{1,0,0},
                   {1,1,0},
                   {1,1,1}        };
    vector<vector<bool>>visited(n,vector<bool>(n,false));
    visited[0][0]=true;
    string output="";
    vector<string>path;
    solveMaze(arr,n,0,0,visited,output,path);
    for(auto i : path){
        cout<<i<<endl;
    }


}
