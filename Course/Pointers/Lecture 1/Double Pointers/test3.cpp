#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}
void inswap (int  *x, int  *y) 
{
  int t = *x;
  *x = *y;
  *y = t;
}

int main()
{  int a = 10;
    int b = 20;
    int *ptr=&a;
    int *ptr2=&b;
       cout<< a << " " << b << endl;
       cout << ptr << " " << ptr2 << endl;
   inswap(ptr,ptr2);
   cout<< a << " " << b << endl;
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
//    swap(x, y);
//    cout<<x << " "<<y;
  
   return 0;
}