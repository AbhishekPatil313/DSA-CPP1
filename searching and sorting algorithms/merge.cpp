 #include<iostream>
 #include<vector>
 using namespace std;

int main(){
    int arr1[5]={4,2,3,0,0};
    int arr2[2]={1,5};
    //vector<int>arr1;
    // arr1.push_back(4);
    // arr1.push_back(2);
    // arr1.push_back(3);
    // arr1.push_back(0);
    // arr1.push_back(0);
    // vector<int>arr2;
    // arr2.push_back(1);
    // arr2.push_back(5);
    int i=0;
    int j=0;
  //  int isize=arr1.size()-arr2.size();
  int isize=3;
    cout<<isize<<endl;
    while(i<isize){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            arr1[i]=arr2[j];
            j++;
        }
    }
    for(int p:arr1){
        cout<<p<<" ";
    }
}