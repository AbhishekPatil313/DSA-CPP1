#include <iostream>
#include <array>
#include<unordered_map>
#include<vector>



void frequencyCount(vector<int>& arr,int N, int P)
    { 
        
        vector<int>a;
      for(int i=1;i<N;i++)
     {
         int count=0;
         for(int j=0;i<N;j++)
         {
            if(arr[j]==i)
             {count++;}
         }
         
        a.push_back(count);
     }
        
        for (int i = 0; i<N;i++){
            arr[i] = a[i];
        }
        // for (int i = 1; i<=P;i++){
        //     arr.pop_back();
        // }
        // code here
    }
int main(){
vector<int>arr;
arr.push_back(4);
arr.push_back(2);
arr.push_back(3);
arr.push_back(1);
arr.push_back(4);

frequencyCount( arr,5, 5);
for(int i =0 ; i<5 ; i++){
    cout << arr[i] <<" ";
}

}