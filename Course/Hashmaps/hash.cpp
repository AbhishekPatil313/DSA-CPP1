#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> removeDuplicates (int *arr, int size){
    vector<int> output;
    unordered_map<int  , bool>seen;
    for(int i = 0 ; i < size; i++){
        if(!(seen.count(arr[i])>0)){
             seen[arr[i]]=+1;
            output.push_back(arr[i]);
        } 
    }
        cout<<" hello L : "<<seen.count(arr[0])<<endl;

return output;
    
}

int main(){
    int arr[]={2,4,4,64,3,5,3,4,43};
    vector <int>ans= removeDuplicates(arr,9);
    for(int i=0 ; i<ans.size(); i++){

        cout<<ans[i]<<"  ";
    }

}

 
 
 