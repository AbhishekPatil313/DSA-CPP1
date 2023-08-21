
#include<iostream>
using namespace std;
int main(){
       cout<<"Enter the array size:";

     int n;
    cin>>n;
    int arr[n];
   cout<<"Enter the values :";
    for (int i=0;i<n;i++){    
         cin>>arr[i];
    }
    int count=0;
        for (int j=0;j<n;j++){    
         if(arr[j]>=10){
            count++;
         }
         
    }
    cout<<count;5
    

        return 0;
}