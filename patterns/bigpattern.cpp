//    1
//   121
//  12321
// 1234321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
// while(i<=n){
//     int space=n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     int j=1;
//     while(j<=i){
//         cout<<j;
//         j++;
//     }
    
//     int val=i-1;
//     while(val){
//           cout<<val;
//           val--;
//     }
//     cout<<endl;
//     i++;
// }

// return 0;
// }



//--------------------------------------------------------------------------------------------

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
  
    while(i<=n){
        int rev=n-i+1;
        int j=1;
        while(rev){
            cout<<j;
            rev--;
            j++;
        }
    
    int star=(i-1)*2;
    while(star){
        cout<<"*";
        star--;
    }

    int rev2=n-i+1;
      int k=n-i+1;
    while(rev2){
        cout<<k;
        k--;
        rev2--;
    }


        cout<<endl;
        i++;
    }
    


return 0;
}