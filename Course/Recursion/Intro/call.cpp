#include<iostream>
#include<string>
using namespace std;
void print(int n){
    if (n == 0){
        return ;
    }
    cout << n << endl;
    print(n-1);
    cout << n << endl;
}

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if (n == 0 ){
     return 0;   
    }
   
    int small = sum (input + 1 , n - 1);
     int s = small + input[0];
     return s;

}
bool checkNumber(int input[], int size, int x) {

    if (size == 0 ){
        return false;
    }
    if (input[0]==x){
        return true;
    }
    bool small = checkNumber(input + 1 , size - 1 , x);
    if (small){
        return true;
    }
    else {
        return false;
    }
   
    
   // return small;

}


bool N(int input[], int size, int x) {

    if (size == 0 ){
        return false;
    }
    
    bool small = N(input + 1 , size - 1 , x);
    
       if (input[0]==x){
        return true;
    } 

  
   
    return false;
   // return small;

}
int main(){
    //print(5);
    int arr [5]={2,3,5,8,4};
    //int ans = sum(arr,5);
   // cout << ans << endl;
   bool s = N(arr,5,9);
   cout << s << endl;
    return 0;
}