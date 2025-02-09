#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) {
        val = _val;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) return head;

        Node* curr = head;
        while (curr != nullptr) {
            if (curr->child != nullptr) { 
                Node* next = curr->next;  
                
                curr->next = flatten(curr->child);
                curr->next->prev = curr; 
                
                curr->child = nullptr; 
                
                while (curr->next != nullptr) {
                    curr = curr->next;
                }
                
                if (next != nullptr) {
                    curr->next = next;
                    next->prev = curr;
                }
            }
            curr = curr->next; 
        }
        return head;
    }
};

void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}


Node* createList() {
    // Creating main list: 1 - 2 - 3 - 4 - 5 - 6
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->prev = head->next->next->next;
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->prev = head->next->next->next->next;

    // Creating first child list: 7 - 8 - 9 - 10 (attached to node 4)
    Node* child1 = new Node(7);
    child1->next = new Node(8);
    child1->next->prev = child1;
    child1->next->next = new Node(9);
    child1->next->next->prev = child1->next;
    child1->next->next->next = new Node(10);
    child1->next->next->next->prev = child1->next->next;
    head->next->next->next->child = child1; // Attach child list to 4

    // Creating second child list: 11 - 12 (attached to node 8)
    Node* child2 = new Node(11);
    child2->next = new Node(12);
    child2->next->prev = child2;
    child1->next->child = child2; // Attach child list to 8

    return head;
}

// Driver code
int main() {
    Node* head = createList();
    cout << "Original List (with children not printed):" << endl;
    printList(head); // This will not show children

    Solution sol;
    head = sol.flatten(head);

    cout << "Flattened List:" << endl;
    printList(head);

    return 0;
}
