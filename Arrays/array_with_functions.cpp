#include <iostream>
using namespace std;

// void printArray(int arry[],int size){

//     cout<<"Printing the array :"<<endl;
//     for (int i=0;i<size;i++){
//         cout<<arry[i]<<endl;
//     }
// }

// int main(){
//     int array[3];
//     int arr[3]={1,54,2};
//     // printArray(array,3);
//     // printArray(arr,3);  
//     int sizee=sizeof(arr)/sizeof(arr[0]);
//     cout<<sizee;
//     char ch[5]={'a','b','c','d','d'};
//     for (int i=0;i<5;i++){
//         cout<<ch[i]<<" "<<endl;
//     }

//     bool fbool[3]={0,1,1};
//        for (int i=0;i<3;i++){
//         cout<<fbool[i]<<" "<<endl;
//     }
//     return 0;
// }





void printArray(int arr[],int size){
    arr[0]=122;
    arr[1]=232;
    arr[2]=344;
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int array[3]={12,21,12};
    printArray(array,3);
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=array[i];
    }
    cout<<"Sum of all elements is :"<<sum<<endl;


    cout<<0+'1';
    return 0;
}