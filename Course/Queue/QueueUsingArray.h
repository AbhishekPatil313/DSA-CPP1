template <typename T>
class QueueUsingArray{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public :
    QueueUsingArray(int s){
        data = new T(s);
        nextIndex = 0 ;
        firstIndex = -1;
        size = 0 ;
        capacity = s;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    T front (){
        if(!isEmpty()){
        return data[firstIndex];
        }
        else{
            cout<<"Queue is empty" <<endl;
        }
    }
    void enqueue(T element){
       if(size!=capacity){
        if(firstIndex==-1)firstIndex=0;
       data[nextIndex]=element;
       nextIndex = (nextIndex+1)%capacity; 
       size++;
       }
       else{
        cout<<"Stack Full !"<<endl;
       }

    }

    T dequeue(){
        if(!isEmpty()){
            T ele = data[firstIndex];
            firstIndex=(firstIndex+1)%capacity;
            size--;
            return ele;
            if(size==0){
                firstIndex=-1;
                nextIndex == 0;
            }
        }
        else{
            cout<<"Queue is empty"<<endl;
        }
    }
};