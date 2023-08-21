
#include<vector>



class PriorityQueue{
    vector<int>pq;
    public:
    PriorityQueue(){

    }
    bool isEmpty(){
        return pq.size()==0;
    }

    //Return the size of priority Queue = no of elements present
    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(!isEmpty()){
        return pq[0];
        }
        return 0;
    }

    void insert(int element){
        pq.push_back(element);  
        int childIndex = pq.size()-1;
        while(childIndex>0){
        int parentIndex = (childIndex - 1) /2; 
        if(pq[childIndex]<pq[parentIndex]){
            swap(pq[childIndex],pq[parentIndex]);
        }
        else{
            break;
        }
        childIndex=parentIndex;
        }
        
    }

    // int  removeMin(){
    //      int size =pq.size();
    //     int leftChildIndex;
    //     int rightChildIndex;
    //     int mini ;
    //     int minIndex;
    //     int ans = pq[0];
    //     pq[0]=pq[pq.size()-1];
    //     pq.pop_back();
    //     int parentIndex=0;
    //     while(parentIndex<=pq.size()){
      
    // if(leftChildIndex>size && rightChildIndex<=size){
    //       //leftChildIndex=2*parentIndex+1;
    //       rightChildIndex=2*parentIndex+2;
    //       mini = min(pq[parentIndex],pq[rightChildIndex]);
    //       swap(mini,pq[parentIndex]);
    //       parentIndex=minIndex;
    // }
    // else if(leftChildIndex >size && leftChildIndex<=size){
    //      leftChildIndex=2*parentIndex+1;
    //     // rightChildIndex=2*parentIndex+2;
    //     mini = min(pq[parentIndex],pq[leftChildIndex]);
    //     swap(mini,pq[parentIndex]);
    //      parentIndex=minIndex;
    // }
    // else{
    //     size =pq.size();
    //      leftChildIndex=2*parentIndex+1;
    //      rightChildIndex=2*parentIndex+2;
    //      mini = min(pq[parentIndex],min(pq[leftChildIndex],pq[rightChildIndex]));
    //      minIndex;



    //    if(mini==pq[parentIndex]){
    //         minIndex=parentIndex;
    //     }
    //     else if(mini==pq[leftChildIndex]){
    //         minIndex=leftChildIndex;
    //     }
    //     else{
    //         minIndex=rightChildIndex;
    //     }
      
    //     swap(mini,pq[parentIndex]);
    //     parentIndex=minIndex;
    //     }
    //     }
    //     return ans;
    // }



int removeMin(){
    if(pq.size()==0){
        return 0;
    }
    int ans = pq[0];
    pq[0] = pq[pq.size()-1];
    pq.pop_back();
    
    
    int parentIndex=0;
    int leftChildIndex = 2 * parentIndex +1;
    int rightChildIndex = 2 * parentIndex + 2;


    while(leftChildIndex < pq.size()){

        int minIndex = parentIndex;
        if(pq[minIndex] > pq[leftChildIndex]){
            minIndex = leftChildIndex;
        }
        if(rightChildIndex<pq.size() && pq[minIndex] > pq[rightChildIndex]){
            minIndex = rightChildIndex;
        }

        if(minIndex==parentIndex){
            break;
        }

        swap(pq[minIndex],pq[parentIndex]);
        parentIndex = minIndex;
        leftChildIndex = 2 * parentIndex +1;
        rightChildIndex = 2 * parentIndex + 2;
    }



    return ans;


}

void heapSort(int arr[], int n) {
    // Write your code
    for (int i = 0; i < n; i++) {

      int childIndex = i;

      while (childIndex > 0) {
        int parentIndex = (childIndex - 1) / 2;

        if (arr[childIndex] < arr[parentIndex]) {
          int temp = arr[childIndex];
          arr[childIndex] = arr[parentIndex];
          arr[parentIndex] = temp;
        } else {
          break;
        }

        childIndex = parentIndex;
      }
    }

  int size = n;
  while(size>1){
    int temp = arr[0];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
    size--;


    int parentIndex=0;
    int leftChildIndex = 2 * parentIndex +1;
    int rightChildIndex = 2 * parentIndex + 2;


    while(leftChildIndex < size){

        int minIndex = parentIndex;
        if(arr[minIndex] > arr[leftChildIndex]){
            minIndex = leftChildIndex;
        }
        if(rightChildIndex<size && arr[minIndex] > arr[rightChildIndex]){
            minIndex = rightChildIndex;
        }

        if(minIndex==parentIndex){
            break;
        }

        swap(arr[minIndex],arr[parentIndex]);
        parentIndex = minIndex;
        leftChildIndex = 2 * parentIndex +1;
        rightChildIndex = 2 * parentIndex + 2;
  }
 

} 




};