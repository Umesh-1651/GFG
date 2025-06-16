/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
   void rev(Node* root){
    if(root == NULL) return;  // ✅ base case to prevent null access
    rev(root->left);
    rev(root->right);
    swap(root->left, root->right);
}

    void mirror(Node* node) {
        // code here
        rev(node);
    }
};