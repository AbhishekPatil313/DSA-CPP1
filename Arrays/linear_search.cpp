#include <iostream>
using namespace std;
void search(int arr[],int size, int key){
     for(int i=0;i<size;i++){
        if(key==arr[i]){
            cout<<"Key is present at index :" <<i<<endl;
        }       
     }
    

}
int main(){
    int arr[]={2,4,3,42,3,-34,234,23};
    search(arr,8,234);
    return 0;
}