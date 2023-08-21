#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     for (;;){
//         if (i<=n){
//             cout<<i;
//         }
//         else{
//             break;
//         }
//         i++;
//     }
//     return 0;
// }
//=================================================================================================


//fibonacci series

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int a=0;
//     int b=1;
//     cout<<a<<" "<<b<<" ";
//     for (int i =1;i<=n;i++){
//     int sum=a+b;
//     cout<<sum<<" ";
//     a=b;
//     b=sum;   
//     }
//     return 0;
// }

//--------------------------------------------------------------------------------------------------


//whether number is prime or not program


// int main(){
//     int count=0;
//     int n;
//     cin>>n;
//     for(int i=2;i<n;i++){
//         if ((n%i)==0){
//             count++;
//         }
//     }
//     if (count==0 && n!=1){
//         cout<<"its a prime number";
//     }
//     else {
//         cout<<"not a prime number";
//     }
    
// return 0;
// }




//===============================================================================================

//print prime numbers of given length 

// int main(){
    
//     int k;
//     cin>>k;
//     for(int j=1;j<=k;j++){
//         int count=0;
//     for(int i=2;i<j;i++){
//         if ((j%i)==0){
//             count++;
//         }
//     }
//     if (count==0 && j!=1){
//         cout<<j<<endl;
//     }

//     } 
// return 0;
// }


//=================================================================================================

// int main(){
//     int b=1;
//    if (1){
//     int b=2;
//     if (1){
//         //int b=3;
//         cout<<b;
//     }
//    }


//     return 0;
// }


int main(){
    int n;
    cin>>n;

   int prod=1;
   int sum=0;
   while(n!=0){
    int digit=n%10;
    n=n/10;
    prod=prod*digit;
    sum=sum+digit;

   }

   cout<<prod-sum;

    return 0;
}


