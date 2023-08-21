#include<iostream>
using namespace std;
int main(){
    int arr[4][6];
    for(int i = 0 ; i<4 ; i++){
       // cout<<"for "<<i<<endl;
        for(int j = 0 ; j < 6; j++){
          //  cout<<"enter "<<i<<" "<<j<<" th value :";
            cin>>arr[i][j];
        }
        //cout<<endl;
    }

int arr1[100][3];
int k = 1;
for(int i = 0 ; i < 4; i++){
    for(int j = 0 ;  j < 6; j++){
        if(arr[i][j]!=0){
            arr1[k][0]= i;
            arr1[k][1]=j;
            arr1[k][2]=arr[i][j];
            k++;
        }
    }
}

arr1[0][0]=4;
arr1[0][1]=6;
arr1[0][2]=k-1;
    






      for(int i = 0 ; i<k ; i++){
       // cout<<"for "<<i<<endl;
        for(int j = 0 ; j < 3; j++){
            cout<<arr1[i][j]<<"  ";
        }
        cout<<endl;
    }
}