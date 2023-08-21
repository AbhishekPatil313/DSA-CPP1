#include<iostream>
#include<queue>
#include "BinaryTreeNode.h"
using namespace std;
void printTree(BinaryTreeNode<int>* root){
    if(root==NULL)return ;

    cout<<root->data<<" : ";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

int totalNodes(BinaryTreeNode<int>* root){
    if(root==NULL)return 0;
    int ans = 0;
    if(root->left!=NULL){
        ans+=totalNodes(root->left);
    }
      if(root->right!=NULL){
        ans+=totalNodes(root->right);
    }
    return ans+1;
}
BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
     cout<<"Enter data : ";
    cin>>rootData;
    if(rootData==-1)return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the left child of "<<front->data<<":";
        int leftChilddata;
        cin>>leftChilddata;
        if(leftChilddata!=-1){
           BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChilddata);
           front->left=leftChild;
           pendingNodes.push(leftChild);
        }


        cout<<"Enter the right child of "<<front->data<<":";
        int rightChilddata;
        cin>>rightChilddata;
        if(rightChilddata!=-1){
           BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightChilddata);
           front->right=rightChild;
           pendingNodes.push(rightChild);
        }
    }
    return root;
}
void printTreeNodeLevelWise(BinaryTreeNode<int>* root){
    if(root==NULL)return;
    queue<BinaryTreeNode<int>*>pendingNodess;
    pendingNodess.push(root);
    while(!pendingNodess.empty()){
        BinaryTreeNode<int>* front = pendingNodess.front();
        pendingNodess.pop();
        cout<<front->data<<" : ";
        if(front->left!=NULL){
            cout<<"L"<<front->left->data;
            pendingNodess.push(front->left);
        }
         if(front->right!=NULL){
            cout<<"R"<<front->right->data;
            pendingNodess.push(front->right);
        }
        cout<<endl;
    }
}
BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data : ";
    cin>>rootData;
    if(rootData==-1)return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left=leftChild;
    root->right=rightChild;
    return root;
}
int main(){
    // BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
   
    BinaryTreeNode<int>* root = takeInputLevelWise();
    // root->left=node1;
    // root->right=node2;
    printTreeNodeLevelWise(root);
    int ans = totalNodes(root);
    cout<<"Total node are :"<<ans <<endl;
    
}