// AAAA
// BBBB
// CCCC
// DDDD
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;  
//         while(i<=n){
//         int j=1;
//         while(j<=n){
//             char k= 'A' + i -1;
//             cout<< k;
         
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }








// ABC
// ABC
// ABC
// int main(){
//     int n;
//     cin>>n;
//     int i=1;  
//         while(i<=n){
//         int j=1;
//         while(j<=n){
//             char k= 'A' + j -1;
//             cout<< k;
         
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }


int main(){
    int n;
    cin>>n;
    int i=1; 
    int val='A'; 
        while(i<=n){
        int j=1;
        
        while(j<=n){
            
           char a=val;
            cout<<a;
        
            //cout<< k;
         val++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
