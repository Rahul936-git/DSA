#include<iostream>
#include<vector>
using namespace std;

class Node{

          public:
                    int data;
                    Node *left;
                    Node *right;

          Node(int val){

                    data = val;
                    left = right = NULL;
          }
};

static int idx = -1;

Node* buildtree(vector<int>&preOrder){

          idx++;

          if(preOrder[idx] == -1) return NULL;

          Node* root = new Node(preOrder[idx]);

          root->left = buildtree(preOrder);
          root->right = buildtree(preOrder);

          return root;
}



void preOrder(Node* root){

          if(root == NULL) return;

          cout << root->data << " ";
          preOrder(root->left);
          preOrder(root->right);
}

int main(){

          vector<int>preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

          Node* root = buildtree(preorder);

          preOrder(root);

          cout<<endl;

          return 0;
}
