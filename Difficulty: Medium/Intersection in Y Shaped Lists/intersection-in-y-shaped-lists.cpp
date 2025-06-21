// Linked list Node
/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        map<Node*,int> mp;
        Node* temp =head1;
        while(temp!=NULL){
            mp[temp]++;
            temp = temp->next;
        }
        temp = head2;
        while(temp!=NULL){
            if(mp[temp] == 1) return temp;
            temp = temp->next;
        }
        return NULL;
    }
};