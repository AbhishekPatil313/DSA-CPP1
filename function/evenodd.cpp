
#include<iostream>
using namespace std;
// bool evenodd(int n){
//   if(n&1){
//         return 1;
//     }
// return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     if (evenodd(n)){
//         cout<<n<<" is odd";
//     }
//     else{
//         cout<<n<<" is even "<<endl;
//     }

//     return 0;
// }

//==============================================================================================

//program to determine whether the number is prime or not using function.

// bool prime(int n){
//     int count=0;
//     for (int i=2;i<n;i++){
//         if(n%i==0){
//            count++; 
//         }
//     }
//     if (count==0 && n!=1){
//         return 1;
//     }
// return 0;
//     }

// int main(){
//     int n;
//     cin>>n;
//     if (prime(n)){
//         cout<<n<<" is prime number";
//     }
//     else{
//         cout<<n<<" is not prime number "<<endl;
//     }
    

//     return 0;
// }






//===============================================================================================

//program to count total set bits of two numbers using function

// int bitcount(int n){
//     int count=0;
//     while(n!=0){
//   if(n&1){
//         count++;      
//     }
//     n=n>>1;
//     }
// return count;
// }

// int totalcount(int a , int b){
//     int first=bitcount(a);
//     int second=bitcount(b); 
//     return first+second;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=totalcount(a,b);
//     cout<<ans;  
//   return 0;
// }


//=============================================================================================



// void fibonacci(int n){
//   int a=0;
//   int b=1;
//   //cout<<a<<" "<<b;
//   int c=0;
//   for(int i=1;i<n-1;i++){
//     c=a+b;
//     a=b;
//     b=c;
//   }
//   cout<<c;
// }
// int main(){
//   int n;
//   cin>>n;
//   fibonacci(n);
//   return 0;
// }


//===============================================================================================

int update(int a){
  a-=5;
  return a;
}
int main (){
  int a =15;
  update(a);
  cout<<a;
}