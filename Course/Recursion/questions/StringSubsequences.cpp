#include<iostream>
#include<string>
using namespace std;

int subsequences(string s , string op[]){
    if (s.empty()){
        op[0]="";
        return 1;
    }
    int subsize = subsequences(s.substr(1),op);
    for (int i = 0 ; i < subsize ; i++){
        op[i+subsize]=s[0]+op[i];
    }
    return 2*subsize;
}

int subsequences(num n , string op[],arr[]){
    if (num == 0||num==1){
        op[0]="";
        return op;
    }
    int subsize = subsequences(n/10);
    int num = n%10;
    string s = arr[num];
    int j = 0;
    while(j<num){
    for (int i = 0 ; i < subsize ; i++){
        op[i+subsize]=s[j]+op[i];
    }
    num--;
    }
     
    return 2*subsize;
}
int main(){
    string s;
    cin>>s;
    string* op = new string[100];
    int size = subsequences(s,op);
    for (int i = 0 ; i< size ; i++){
        cout << op[i] << endl;
    }
    

}

























#include <string>
using namespace std;

string dial(int n)
{
    switch(n)
         {
        case 0:
            {
                return " ";
                break;
            }
        case 1:
            {
                return " ";
                break;
            }
             case 2:
                 {
                     return "abc";
                     break;
                 }
                 
             case 3:
                 {
                     
                       return  "def";
                         break;
                 }
             case 4:
                 {
                     return  "ghi";
                     break;
                     
                 }
             case 5:
                 {
                     return  "jkl";
                     break;
                 }
             case 6:
                 {
                     return  "mno";
                     break;
                 }
             case 7:
                 {
                     return "pqrs";
                     break;
                 }
             case 8:
                 {
                     return  "tuv";
                     break;
                 }
             case 9:
                 {
                     return  "wxyz";
                     break;
                     
                 }
        default:
            {
                     break;
                 }
         }
}

int keypad(int num, string output[]){
     
        
    if(num == 0)
    {
        return 1;
    }
    
    string smallOutput[500];
    int small = keypad(num/10, smallOutput);
    
    string c = dial(num % 10);
    int k = 0;
    for(int i = 0; i < c.size(); i++)
    {
        for(int j = 0; j < small; j++)
        {
            output[k++] = smallOutput[j] + c[i];
        }
    }


    
    return k;

 
}