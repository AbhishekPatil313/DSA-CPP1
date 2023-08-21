#include<iostream>
#include<string>
using namespace std;

string reverse(string s){
   int start = 0 ;
   int  end  = s.length()-1;
    while(start<=end){
        swap(s[start++],s[end--]);
    }
    return s;
    
}
void rec_reverse(string &s , int start , int end){
if(start>end) return;
swap(s[start],s[end]);
start++;
end--;
rec_reverse(s,start,end);
//return s;
} 
int main(){
string a = "abhishek";
//string ans = reverse(a);
//cout << ans <<endl;
 rec_reverse(a,0,a.length()-1);
//cout<< rev <<endl;
cout<<a<<endl;
}