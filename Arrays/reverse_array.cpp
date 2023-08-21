#include<iostream>
using namespace std;
// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int temp=0;
//     while(start<=end){
//         temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;     
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//       for (int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     reverse(arr,6);
//     for (int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
    
    
// }


//===============================================================================================


//swap the alternate values of array

// int main(){

//     int arr[]={1,2,3,4,5};
//       for(int i=0;i<5;i++){
//        cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<5;i++){
//       if (i+1<4){
//         swap(arr[i],arr[i+1]);
//       }
//         i++;
//     }
// cout<<endl;
//      for(int i=0;i<5;i++){
//        cout<<arr[i]<<" ";
//     }   
//     return 0;
// }



//=============================================================================================



// int main(){

//     int arr[]={1,2,3,4,5,6};
//     int ary[]={2,3,4};
//     int ar[100];
//       for(int i=0;i<6;i++){
//        for (int j =0;j<3;j++){
//         if (arr[i]==ary[j]){
//            cout<<arr[i] <<endl;
//            cout<<endl;
//            //cout<<ary[j] <<endl;
        
//         }
//     }
//       }
//     return 0;
// }




//==========================================================================================
//print sum of two array values which is equal to target (s)
int main(){

    int arr[]={1,2,3,4,5,6};
    // for(int i=0;i<6;i++){
    // cout<<arr[i+1];
    // }
    int ar[100];
    int s=5;
      for(int i=0;i<6;i++){
       for (int j =i+1;j<6;j++){
        if(j<6){
        if (arr[i]+arr[j]==s){
          cout<<arr[i]<<endl;
          cout<<arr[j]<<endl;
          cout<<arr[i]+arr[j];      
        }
        }
    }
      }
    return 0;
}