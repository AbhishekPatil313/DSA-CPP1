
// A
// BB
// CCC
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char a='A';
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char a='A'+i-1;
//             cout<<a;
            
//             j++;
//         }
//        // a++;
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }





// A 
// BC
// DEF
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     char a='A';
//     while(i<=n){
//         int j=1;
//         while(j<=i){
            
//             cout<<a;
//             a++;
//             j++;
//         }
//        // a++;
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int val=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//          cout<<val;
//          val++;
//             j++;
//         }

//         cout<<endl;
//         i++;
//     }
//     return 0;
// }





// D
// CD
// BCD
// ABCD
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        char start = 'A'+n-i;
        while(j<=i){
           // char a='A'+n-i+1;
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
