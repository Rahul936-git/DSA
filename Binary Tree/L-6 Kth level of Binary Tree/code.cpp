#include<bits/stdc++.h>
using namespace std;

class Node{
public: 

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int>&preorder){
    idx++;
    if(preorder[idx]==-1) return NULL;

    Node* root=new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void kthLevel(Node* root,int level){

    if(root==NULL) return;

    if(level==1){
        cout<<root->data<<" ";
    }

    kthLevel(root->left,level-1);
    kthLevel(root->right,level-1);
}

int main(){

    vector<int>preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    kthLevel(root,3);

    return 0;
}