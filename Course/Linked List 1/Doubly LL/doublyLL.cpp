#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int data){
     this->data=data;
     prev=NULL;
     next=NULL;
    }
};
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
    cout<<endl;
}
int getLength(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void insertAtHead(Node* &tail ,Node* &head,int data)  {
    if(head==NULL){
        Node *newNode =new  Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    
    Node *temp = new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    
}
void insertAtTail(Node* &tail ,Node * &head, int data){
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail=newNode;
        head=newNode;
        return;
    }
    Node *temp = new Node(data);
    tail->next=temp;
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
}
void insertAtPos(Node* &tail,Node* &head,int pos , int data){
    if(pos==0){
        insertAtHead(tail,head,data);
        return;
    }
    Node *temp = head;
    int cnt=0;
    while(temp!=NULL and cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }
    Node *newNode = new Node(data);
    newNode->next=temp->next;
    temp->next->prev=newNode;
    newNode->prev=temp;
    temp->next=newNode;

}


void deleteAtPos(Node* &tail,Node* &head,int pos ){
    if(pos==0){
        Node *temp = head;
        delete temp;
        head=head->next;
        head->prev=NULL;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;
    int cnt=0;
    while(temp!=NULL and cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next->next==NULL){
        Node *del = temp->next;
        temp->next=NULL;
        delete del;
        return;
    }
    Node *del = temp->next;
    delete del;
    temp->next=temp->next->next;
    

}
int main(){
    Node *n1 = new Node(10);
    Node *head=NULL;
    Node *tail=NULL;
    print(head);
     insertAtHead(tail,head,24);
     print(head);
    insertAtHead(tail ,head,25);
    print(head);
    deleteAtPos(tail,head,1);
    print(head);

    // insertAtHead(tail,head,26);
    // print(head);
    // insertAtTail(tail,head,46);
    // print(head);
    // insertAtTail(tail,head,46);
    // print(head);
    // insertAtPos(tail,head,5,34);
    // print(head);
    // insertAtPos(tail,head,6,30);
    // print(head);
    // deleteAtPos(tail,head,2);
    // print(head);

}