// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=n-i+1;
//         while(j){
//             cout<<i;
//             j--;
//         }
//         cout<<endl;

//         i++;
//     }

//     return 0;
// }

//-------------------------------------------------------------------------------------------------


//     1
//    22
//   333
//  4444

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=n-i+1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;

//         i++;
//     }

//     return 0;
// }


//------------------------------------------------------------------------------------------------

// 1234
//  567
//   89
//    10


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int val=1;
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=n-i+1;
        
//         while(j){
//             cout<<val;
//             val++;
//             j--;
//         }
//         cout<<endl;

//         i++;
//     }

//     return 0;
// }



//------------------------------------------------------------------------------------------------

// 1234
//  123
//   12
//    1

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=n-i+1;
//         int val=1;
//         while(j){
//             cout<<val;
//             val++;
//             j--;
//         }
//         cout<<endl;

//         i++;
//     }

//     return 0;
// }

//-----------------------------------------------------------------------------------------------

// 1234
//  234
//   34
//    4
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=i;
//         int val=n-i+1;
//         while(val){
//             cout<<j;
//             j++;
//             val--;
//         }
//         cout<<endl;

//         i++;
//     }

//     return 0;
// }


//------------------------------------------------------------------------------------------------


//    1 
//   2 3
//  4 5 6
// 7 8 9 10

int main(){
    int n;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
     int j=1;
     while(j<=i){
        cout<<val<<" ";
        j++;
        val++;
     }
        cout<<endl;

        i++;
    }

    return 0;
}
