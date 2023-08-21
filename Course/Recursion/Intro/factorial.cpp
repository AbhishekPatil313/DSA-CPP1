#include<iostream>
using namespace std;


int fact(int n){
    if (n == 0) 
    return 1;
    int ans = fact (n - 1);
    return n * ans;
}

int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if (n == 0)
        return 1;
    int ans = x * power (x,n - 1);
	return ans;
}
void  print(int n){
    //write your code here
    if (n == 0)return;
 cout << n;
 print(n-(n-1));
}

int main () {
    int n ;
    //cin >> n;
   //int a = fact(n);
    //cout << a;

    print(4);
    //power(2,4);
    
    return 0;
}