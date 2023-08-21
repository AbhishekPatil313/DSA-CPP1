#include<iostream>
#include<string>
using namespace std;
#include<string.h>

    


bool string_palindrome(string s ,int start, int end){
    cout << "call for -" << s << " " << start << " " << end<<endl;
    if(start>end)return true;
     //end = s.length()-1;
    if(s[start]!=s[end]){
        return false;
    }
    return string_palindrome(s,start+1,end-1);

}
int main(){
string s="abcdcba";
bool ans = string_palindrome(s,0,6);
cout << ans <<endl;
}