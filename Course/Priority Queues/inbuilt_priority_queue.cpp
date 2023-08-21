#include<iostream>
#include<queue>
using namespace std;

void kSortedArray(int input[],int n , int k){
    priority_queue<int>pq;
    for(int i = 0 ; i  < k ;i++){
        pq.push(input[i]);
    }
int j = 0;
    for(int i = k ; i < n ; i++){
        input[j]=pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }

    while(!pq.empty()){
        input[j]=pq.top();
        j++;
        pq.pop();
    }

}


int kthLargest(int* arr, int n, int k) {
    // Write your code here
    priority_queue<int,vector<int>,greater<int>>pq;
    for (int i = 0; i < k; i++) {
    pq.push(arr[i]);
    }
    for (int i = k; i < n; i++) {
      if (arr[i] > pq.top()) {
        cout<<pq.top()<<endl;
      pq.pop();
      pq.push(arr[i]);
      }
    }
    // while(!pq.size()==1){
    //    // cout<<pq.top()<<endl;
    //     pq.pop();
    // }
    return pq.top();
}
void print(int arr[],int size){
     for(int i = 0 ; i<size ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    // priority_queue<int> pq;
    // pq.push(12);
    // pq.push(1);
    // pq.push(23);
    // pq.push(45);
    // pq.push(66);

    // cout<<"Size : "<<pq.size()<<endl;
    // cout<<"Max : "<<pq.top()<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    int arr[]={9,4,8,7,11,3};
   // kSortedArray(arr,5,3);
  int ans =  kthLargest(arr,6,2);
  cout<<ans<<endl;
   //print(arr,6);

}