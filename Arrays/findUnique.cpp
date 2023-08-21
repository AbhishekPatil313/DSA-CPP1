#include<iostream>
using namespace std;
int find(int *arr , int n){
    int i , j;
    for ( i = 0 ;i<n;i++){
        for ( j = 0 ; j< n ;j++){
            if (arr[i]==arr[j] && i!=j){
                break;
            }
        }
          if(j == n ){
            cout << arr[i] <<endl;
      }
        
    }
}

int finddup(int *arr , int n){
    int i , j;
    int ele = -1;
    for ( i = 0 ;i<n;i++){
        for ( j = i+1 ; j< n ;j++){
            if (arr[i]==arr[j] ){
             ele = arr[i];
                break;
            }
        }
         
        
    }
    cout << ele <<endl;
}

int finduniq(int *arr , int n){
     int ans = arr[0];
    for (int i = 1 ; i<=n ; i++){
     ans = arr[i]&ans;   
    }
    cout << ans;
        
    
}
int main(){
    int arr[5]={3,4,2,7,2};
    int array[5]={1,2,1,2,5};
    finddup(arr,5);
   // finduniq(arr,5);
   // find(array,5);

}