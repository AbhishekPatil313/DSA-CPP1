#include<iostream>
using namespace std;

int firstIndex(int arr[], int size , int x){
    if (size == 0){

        return -1;
    }

    int small = firstIndex(arr+1,size - 1,x);
    
          if (small == -1){
          if (arr[0]==x)
         return 0;
         return -1;
    }
  
    return small + 1;
}
int main(){
    int arrry[5]={2,4,3,2,34};
    int index = firstIndex(arrry,5,2);
    cout << (index)<< endl;
    return 0;
}