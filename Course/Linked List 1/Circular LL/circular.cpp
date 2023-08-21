#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    
    Node *next;
    Node(int data){
     this->data=data;
     
     next=NULL;
    }
};

void print(Node *tail){
    Node *temp = tail;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
   cout<<endl;   
    
}

void insert(Node* &tail ,int element , int d){
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next=newNode;
    }
    else{
        
        Node *curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node *newNode = new Node(d);
        newNode->next=curr->next;
        curr->next=newNode;
        
        //newNode->next=head;
        
      
    }
}

int main(){

    Node *tail = NULL;
    insert(tail,3,5);
    print(tail);
    insert(tail,5,5);
    print(tail);
    insert(tail,5,98);
        print(tail);

}