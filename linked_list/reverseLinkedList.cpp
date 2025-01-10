#include<iostream>
using namespace std;
class ListNode {
public:
    int data;
    ListNode* next; 

    ListNode(int val){
        data = val;
        next =NULL;
    }    
};

class Node{
public:
    ListNode* head;
    ListNode* tail;

    Node(){
        head = tail = NULL;
    }

    void push_front(int val){ //O(1)
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = tail = newNode;
            return ; 
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr!= NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }

     

};

int main()
{
    Node ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.head = ll.reverseList(ll.head);
    
    ListNode* temp = ll.head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}