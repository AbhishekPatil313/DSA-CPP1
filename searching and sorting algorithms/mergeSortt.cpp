#include<iostream>
using namespace std;
void merge(int input[], int si, int mid, int ei)
{
    int size= ei-si +1;
    int p[size];
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=ei)
    {
        if(input[i]<=input[j])
        {
            p[k]=input[i];
            i++;
            k++;
        }
        else
        {
            p[k]=input[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        p[k]=input[i];
        k++;
        i++;
    }
    while(j<=ei)
    {
        p[k]=input[j];
        k++;
        j++;
    }
    int s=si;
    for(int z=0; z<k; z++)
    {
        input[s]=p[z];
        s++;
    }
    //delete [] p;
}
void merge_sort(int arr[], int si , int ei){
    if (si>=ei){
        return;
    }
    int mid = (si + ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge(arr, si,mid ,ei);
}



void mergeSort(int input[], int size){
   
    int si = 0;
    int ei = size-1;
    merge_sort(input,si,ei);
}
int main(){
    int arr[]={5,3,5,3,2,1,2,3};
    mergeSort(arr,8);
    for(int i = 0 ; i < 8;i++){
        cout<<arr[i]<<" ";
    }
}