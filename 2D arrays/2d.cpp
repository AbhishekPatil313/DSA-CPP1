#include<iostream>
#include<string>
using namespace std;

void largest(int arr[][4],int row , int col){
    int great=-343;
    int r, c;
    for(int i = 0 ; i < row ; i++){
        int sum = 0;
        
        for(int j = 0 ; j < col ; j++){
           sum+=arr[i][j];
        }
        if(sum>great){
            great=sum;
            r=i;
        }
    }

        cout<<"the greatest sum is :"<<great<<"  located at row :"<<r;

}
void printSum(int arr[][4],int row, int col){
    for(int i =0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
       sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,7,8,99},{10,11,12,12}};
    for(int i = 0; i<3;i++){
        for(int j = 0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int val;
    cout<<"Enter any element to search :";
    cin>>val;
    for(int i = 0; i<3;i++){
        for(int j = 0;j<4;j++){
            if(arr[i][j]==val){
                cout<<"It is present at index :"<<i<<" th row "<<j<<" th col"<<endl;
                break;
            }
        }
    }
  


   for(int i = 0; i<3;i++){
    int sum = 0;
        for(int j = 0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum :"<<sum<<endl;
        }


printSum(arr,3,4);
largest(arr,3,4);
    return 0;
}
