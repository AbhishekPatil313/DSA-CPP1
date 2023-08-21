#include <iostream>
#include<math.h>
using namespace std;
int decimalToBinary(int n){
    int digit=0;
    int ans=0;
    int i=0;
    while(n!=0){
        digit=n%10;
        ans=digit*pow(2,i)+ans;
        n=n/10;
        i++;
    }
    return ans;
}


int BinaryStringToInteger(string s){
    int a = 0;
    for(int i = 0 ; i<s.length();i++){
        a=a*10+s[i]-'0';
    }
    return a;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int len;
	    string s;
	    cin>>s;
	    
	    int binary = BinaryStringToInteger(s);
	    int decimal = decimalToBinary(binary);
	    for(int i = 1 ; i < 10;i++){
            int val = decimal/pow(2,i);
	    int ans =( decimal ^ val);
	    if(ans>decimal){cout<<i<<endl;
	    break;
        }
	    }
	    
	}
	return 0;
}