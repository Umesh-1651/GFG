class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        // Your code here
          Node* curr = root;
    Node* pre = nullptr;
    int prevValue = INT_MIN; 

    while (curr != nullptr) {
        if (curr->left == nullptr) {
            
            // Process curr node
            if (curr->data <= prevValue) {
                
                // Not in ascending order
                return false; 
            }
            prevValue = curr->data;
            curr = curr->right;
        } else {
            
            // Find the inorder predecessor of curr
            pre = curr->left;
            while (pre->right != nullptr && pre->right != curr) {
                pre = pre->right;
            }

            if (pre->right == nullptr) {
                
                // Create a temporary thread to the curr node
                pre->right = curr;
                curr = curr->left;
            } else {
                
                // Remove the temporary thread
                pre->right = nullptr;

                // Process the curr node
                if (curr->data <= prevValue) {
                    
                    // Not in ascending order
                    return false; 
                }
                prevValue = curr->data;
                curr = curr->right;
            }
        }
    }

    return true; 
    }
};