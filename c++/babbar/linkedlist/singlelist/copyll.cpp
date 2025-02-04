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
        if (!head) return nullptr;
        
        // Step 1: Create a new node for each original node and insert it next to the original node.
        Node* curr = head;
        while (curr) {
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        
        // Step 2: Set the randomitrary pointers for the clone nodes.
        curr = head;
        while (curr) {
            if (curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        
        // Step 3: Separate the original and clone lists.
        Node* cloneHead = head->next;
        curr = head;
        Node* cloneCurr = cloneHead;
        while (curr) {
            curr->next = curr->next->next;
            curr = curr->next;
            if (curr)
                cloneCurr->next = curr->next;
            cloneCurr = cloneCurr->next;
        }
        
        return cloneHead;
    }
};

    