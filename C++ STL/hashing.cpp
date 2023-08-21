#include <iostream>

#include<unordered_map>
#include<vector>
using namespace std;


// void frequencyCount(vector<int>& arr,int N, int P)
//     { 
        
//         vector<int>a;
//       for(int i=1;i<N;i++)
//      {
//          int count=0;
//          for(int j=0;i<N;j++)
//          {
//             if(arr[j]==i)
//              {count++;}
//          }
         
//         a.push_back(count);
//      }
        
//         for (int i = 0; a.size();i++){
//             arr[i] = a[i];
//         }
     
//     }

    void frequencyCount(vector<int>& arr,int N, int P)
    { 
            unordered_map<int , int>mp;
            //unordered_map<int, int>:: iterator itr;
            for (int i = 0 ; i<N ; i++){
                mp[arr[i]]++;
            }

        
            for(int i = 0 ; i < N ; i++){
                if (mp.find(i+1)==mp.end()){
                 
                        arr[i]=mp[i+1];
                }
                else{
                    
                   arr[i]=0;
                }
            }

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