/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool Helper(Node* left,Node* right){
        if(left == NULL && right== NULL) return true;
        if(left == NULL || right == NULL || left->data != right->data) return false;
        return Helper(left->right , right->left) && Helper(left->left,right->right);
    }
    bool isSymmetric(Node* root) {
        // Code here
        if(root == NULL) return true;
        return Helper(root->left,root->right);
    }
};