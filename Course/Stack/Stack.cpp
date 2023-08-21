#include<climits>

class Stack{
    int *data;
    int nextIndex;
    int capacity;
    public:
    Stack(int totalSize){
        data = new int[totalSize];
        nextIndex=0;
        capacity = totalSize;
    }
    int size(){
        return nextIndex;
    }

    bool  isEmpty(){
        if(this->size()==0)return true;
        else false;
    }

    void push(int element){
        if(!(nextIndex==capacity)){
        data[nextIndex]=element;
        nextIndex++;
        }
        else{
            cout<<"Stack is full !"<<endl;
        }
    }

    int pop(){
        if(!isEmpty()){
        nextIndex--;
        return data[nextIndex];
        }
        else{
            cout<<"Stack is empty !"<<endl;
            return INT_MIN;
        }
    }

    int top(){
        if(!isEmpty()){
        return data[nextIndex-1];
        }
        else{
            cout<<" Stack is empty !" <<endl;
        }
    }
};