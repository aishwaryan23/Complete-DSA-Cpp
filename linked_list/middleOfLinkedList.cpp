#include<iostream>
using namespace std;
class ListNode{
public:
    int data;
    ListNode* next;

    ListNode(int val){
        data = val;
        next = NULL;
    }
};

class Node{
public:
    ListNode* head;
    ListNode* tail;
    ListNode* temp;
    
    Node(){
        head = tail = NULL;
    }
    void push_front(int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
     
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    
};

int main()
{
    Node ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //ll.push_front(5);
    ListNode* final =ll.middleNode(ll.head);
    
    cout<<final->data;
}
