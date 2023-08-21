#include<iostream>
using namespace std;

int firstIndex(int arr[], int size , int x){

        if (size == 0){
        return -1;
    }

     
    int small = firstIndex(arr+1,size - 1,x);
          if (arr[0]==x){
            return 0 ;
         }
    if (small== -1){
        return -1;
    }
  
    return small + 1;
}
int main() {
    int arr[5]={2,3,45,4,55};
    int ans = firstIndex(arr,5,55);
    cout << ans << endl;
}
         
    