#include <iostream>
using namespace std;

// Define the structure of a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Preorder traversal function
void preorder(Node* node) {
    if (node == NULL) {
        return;
    }
    cout << node->data << " ";   // Print current node
    preorder(node->left);        // Visit left subtree
    preorder(node->right);       // Visit right subtree
}

int main() {
    // Create nodes and build the tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Call preorder traversal
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    return 0;
}
