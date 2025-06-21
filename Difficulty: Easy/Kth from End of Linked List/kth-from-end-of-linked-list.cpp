/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        if(head == NULL) return -1;
        int size = 0;
        Node* temp = head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(k>size) return -1;
        int posFromFront = size-(k-1);
        if(posFromFront > size) return -1;
        if(posFromFront == 1) return head->data;
        temp = head;
        int pos = 1;
        while(pos!=posFromFront && pos<=size){
            pos++;
            temp=temp->next;
        }
        return pos==size+1?-1:temp->data;
    }
};