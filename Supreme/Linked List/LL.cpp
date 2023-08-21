#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtPos(int pos,Node*&head , Node*&tail,int data){
    Node*temp=head;
    if(head==NULL && tail==NULL ){
        Node* newNode =new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(pos==0){
        Node* newNode=new Node(data);
        head=newNode;
        return;
    }
    int i = 0;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    if(temp!=NULL){
        Node* newNode= new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;
        return;
        
    }
    if(temp==NULL){
        cout<<"Invalid Index..."<<endl;
        return;
    }
}
void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){


//Node* head = new Node();
Node* first = new Node(12);
Node* second = new Node(12);
Node* third = new Node(12);
Node* fourth = new Node(43);
first->next=second;
second->next=third;
third->next=fourth;
//printLL(first);
Node*head=NULL;
Node*tail=NULL;
insertAtPos(0,head,tail,1);
insertAtPos(1,head,tail,1);
insertAtPos(2,head,tail,1);
insertAtPos(3,head,tail,1);
insertAtPos(4,head,tail,1);
insertAtPos(2,head,tail,56);
printLL(head);


}