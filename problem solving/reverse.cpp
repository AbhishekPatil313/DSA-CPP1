#include<iostream>
using namespace std;



// REVERSE A NUMBER 


// int main(){
//     int n;
//     cin>>n;
//     int digit=0;
//     int num=0;
//     while(n!=0){
//      digit=n%10;
//      if ((num>INT_MAX/10)||(num<INT_MIN/10)){
//             cout<<"number is too greater or too smaller so the result is not an integer : ";
//      }   
//      num=num*10+digit;
//      n=n/10;
//     }
//     cout<<num;
//     return 0;

// }


//==============================================================================================




// PRINT COMPLIMENT OF NUMBER
int main(){

    int n;
    cin>>n;
    int m=n;
    int mask=0;
    if (m==0){
        cout<<1;
    }
    while(m!=0){
        mask=(mask<<1);
        mask=(mask|1);   
        m=m>>1;
    }
    int ans=(~n&mask);
    cout<<ans;
    return 0;
}

/*
In the above code we have to print the compliment of given n . 
so to do it -
1} we can think of ~n will give all flipped bits of given n.
2} as it flips all the bits which we didn't want so we have to & it with a mask 
3} mask var contains all the 1s up till nbits 
*/