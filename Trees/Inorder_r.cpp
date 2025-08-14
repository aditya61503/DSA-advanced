#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void Inorder(Node*node){
    if(node==NULL)return;
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}

int main() {
    // Create nodes and build the tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Call Inorder traversal
    cout << "Preorder Traversal: ";
    Inorder(root);
    cout << endl;

    return 0;
}
