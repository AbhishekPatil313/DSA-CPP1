 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    int j=0;
    int m=1;
    vector<int>arr;
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(9);
    int n=arr.size();

    //int j=0;
    int mid=m+1+(n-1);
	for (int i=m;i<mid/2;i++){
        swap(arr[i+1],arr[n-j-1]);
        j++;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }