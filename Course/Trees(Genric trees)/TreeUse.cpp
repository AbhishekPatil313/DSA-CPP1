#include <iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;
void printTreeNode(TreeNode<int>* root){
    cout<<root->data<<" : ";
    for(int i = 0 ; i < root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i = 0 ; i < root->children.size();i++){
        printTreeNode(root->children[i]);
    }
}
void printLevelWiseK(TreeNode<int>*root,int k){
    if(k==0){
        cout<<root->data<<" ";
        return;
    }

    for(int i = 0 ; i<root->children.size();i++){
        printLevelWiseK(root->children[i],k-1);
    }
}
int totalNodes(TreeNode<int>* root){
    int ans = 0;
    for(int i = 0 ; i<root->children.size();i++){
        ans+=totalNodes(root->children[i]);
    }
    return ans+1;
}

void postOrderTraversal(TreeNode<int>* root){
    
    for(int i = 0 ; i < root->children.size(); i++){
        postOrderTraversal(root->children[i]);
    }
    cout<<root->data<<" ";
}

void preOrderTraversal(TreeNode<int>* root){
    cout<<root->data<<" ";
    for(int i = 0 ; i < root->children.size(); i++){
        preOrderTraversal(root->children[i]);
    }
    
}

void printTreeNodeLevelWise(TreeNode<int>* root){
 queue<TreeNode<int>*>pendingNodess;
 pendingNodess.push(root);
 while(!pendingNodess.empty()){
    TreeNode<int>* front = pendingNodess.front();
        pendingNodess.pop();
    cout<<front->data<<":";
    for(int i = 0 ; i<front->children.size();i++){
        cout<<front->children[i]->data<<",";
        pendingNodess.push(front->children[i]);
    }
     cout<<endl;
 }
}







TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter the root data :";
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numEle;
        cout<<"How many childrens for "<<front->data<<" : ";
        cin>>numEle;
        for(int i = 0 ; i<numEle ; i++){
            int data;
            cout<<"Enter the data for "<<i<<"th child of "<<front->data<<" : ";
            cin>>data;
            TreeNode<int>* child = new TreeNode<int>(data);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
TreeNode<int>* takeInput(){
    int data;
    cout<<"Enter the node data :";
    cin>>data;
    TreeNode<int>* root = new TreeNode<int>(data);
    int child;
    cout<<"How many children do you want for "<<data <<":";
    cin>>child;
    for(int i = 0 ; i < child ; i++){
        TreeNode<int>* child=takeInput();
        root->children.push_back(child);
    }
    return root;

}










int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* node1 = new TreeNode<int>(2);
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // printTreeNode(root);
    TreeNode<int>* root = takeInputLevelWise();
    printTreeNodeLevelWise(root);
    int ans = totalNodes(root);
    cout<<"Total number of nodes :"<<ans << endl;
    //printLevelWiseK(root,2);
    postOrderTraversal(root);
}