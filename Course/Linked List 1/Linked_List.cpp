#include<iostream>
#include "Node.cpp"
using namespace std;

void print(Node *head){
    // Node *temp = head;
    // while(temp!=NULL){
    // cout << temp->data << endl;
    // temp = temp->next;   
    // }
    
     while(head!=NULL){
    cout << head->data << endl;
    head ->data = 3;
    head = head->next;   
    }
    //cout << head << endl;
    
}

class Pair{
    public:
    Node *head;
    Node *tail;

};

Pair reverse(Node *head){
    if(head==NULL||head->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair smallAns = reverse(head->next);
    smallAns.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallAns.head;
    ans.tail=head;
    return ans;

}
Node* revList(Node *head){
    return reverse(head).head;
}

int main(){
    Node n1(3);
    Node *head =  &n1;
    Node n2(4);
    Node n3(2);
    Node n4(3);
    Node n5(1);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    // print(head);
    Node *ans = revList(head);
     print(ans);

     
//cout << n1.data << " " << n2.data << endl;
}