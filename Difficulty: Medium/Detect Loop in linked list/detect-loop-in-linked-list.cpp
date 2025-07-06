/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        unordered_map<Node*,int> mp;
        Node* temp = head;
        while(temp!=NULL){
            mp[temp]+=1;
            if(mp[temp] == 2) return true;
            temp=temp->next;
        }
        return false;
    }
};