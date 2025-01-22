#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* random;

    Node(int data){
        val = data;
        next = NULL;
        random = NULL;
    }
};

class Solution{
public:
    Node* copyRandomList(Node* head){
        if(head == NULL){
            return NULL;
        }

        unordered_map<Node*,Node*> m;
        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        m[head] = newHead;

        while(oldTemp != NULL){
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;

        while(oldTemp != NULL){
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }


};

void printList(Node* head){
    Node* temp = head;
        while(temp){
            cout<<"Node: "<<temp->val;
            if(temp->random){
                cout<<", Random: "<<temp->random->val<<endl;
            }else{
                cout<<", Random: NULL "<<endl;
            }
            temp = temp->next;
        }
}

int main()
{   
    Solution ll;
    Node* head = new Node(7);
    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    //random pointers

    head->random = NULL;
    head->next->random =head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;       
    head->next->next->next->next->random = head;   

    cout<<"Original List: \n";
    printList(head);
    Node* copiedList = ll.copyRandomList(head);
    cout<<"\nCopied List\n";
    printList(copiedList);

    return 0;
}