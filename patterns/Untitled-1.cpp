

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

while(i<=n){
   int space=n-i;
   while(space){
    cout<<" ";
    space--;
   }
   int j=1;
   while(j<=i){
    cout<<"* ";
    j++;
   }
   int second_space=n-i;
   while(second_space){
    cout<<" ";
    second_space--;
   }

      int t_space=n-i;
   while(t_space){
    cout<<" ";
    t_space--;
   }

      int k=1;
   while(k<=i){
    cout<<"* ";
    k++;
   }

cout<<endl;
    i++;

   }


// cout<<endl;
// int ii=1;
// while(ii<=n){
//    int rv1_space=ii-1;
//    while(rv1_space){
//     cout<<" ";
//     rv1_space--;
//    }
//    int t=n-ii+1;
//    while(t){
//     cout<<"* ";
//     t--;
//    }
    

