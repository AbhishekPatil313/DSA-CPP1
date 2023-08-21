#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long res=0;
        for(int i=0; i<n; i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0; i<m; i++){
            int maxi = INT_MIN;
            for(int j=0; j<n; j++ ){
                maxi = max(maxi, grid[j][i]);
            }
            res = (res + maxi);
        }
        return res;
        
    }
int main(){
    //int grid[3][3];
   


    vector<vector<int>> grid;

 
       
    for(int i= 0 ; i < 3;i++){
        for(int j = 0 ; j < 3;j++){
            cin>>grid[i][j];
        }
    }

     for(int i = 0 ; i < 3; i++){
          for(int j = 0 ; j < 3 ; j++){
                   cout<<grid[i][j];
          }
       // cout<<grid[i]<<endl;
     }

 for(int i=0; i<3; i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i = 0 ; i < 3 ; i++){
            for(int j= 0 ; j < 3 ; j++){
                cout<<grid[i][j];
            }
        }


}