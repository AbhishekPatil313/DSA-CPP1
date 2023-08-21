#include<iostream>
using namespace std;
double pre(int num, int temp, int n){
    double factor=1;
    double ans=temp;
    for (int i=0;i<num;i++){
        factor=factor/10;
        for (double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int tempSquareroot(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        int s=mid*mid;
        if (s==n){
            return mid;
        }
        else if(s<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
            mid=start+(end-start)/2;

    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter number for squareroot :"<<endl;
    cin>>n;
    int res=tempSquareroot(n);
    cout<<res<<endl;

    double fin=pre(3,res,n);
    cout<<fin<<endl;

}