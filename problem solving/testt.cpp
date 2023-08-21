#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a ,b;
	    cin>>a>>b;
	    int count=0;
	    for(int i = a; i<=b ;i++){
	       // if(i%10==2||i%10==3||i%10==9)count++;
	       int one = i%10;
	       if(one==2||one==3||one==9)count++;
	    }
	    cout<<count<<endl;
	}
}