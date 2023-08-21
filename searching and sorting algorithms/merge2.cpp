#include<iostream>
using namespace std;
int main(){
    int i=0;
    int j=0;
    //vector<int>arr3;
    int k=0;
    int arr1[]={1,2,3};
    int arr2[]={4,5};
    int arr3[]={0};
    int m=3;
    int n=2;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
           arr3[k]=arr1[i];       
            k++;
            i++;
        }
        else{
            //arr1[i]=arr2[j];
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<m){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    
    // for(int p=0;p<7;p++){
    //     arr1[p]=arr3[p];
    // }
    for(int p=0;p<5;p++){
        cout<<arr3[p]<<endl;
    }
}
