/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*, Node*>umap;
        Node* temp = head;
        while(temp !=NULL){
            umap[temp] = new Node(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp !=NULL){
            umap[temp]->next = umap[temp->next];
            umap[temp]->random = umap[temp->random];
            temp = temp->next;
        }
        return umap[head];
    }
};