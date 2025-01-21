#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int data){
        val = data;
        next = NULL;
    }
};

class Node{
public:
    ListNode* head1;
    ListNode* head2;

    Node(){
        head1 = NULL;
        head2 = NULL;
    }
    void push_front1(int val){
        ListNode* newNode1 = new ListNode(val);
        if(head1 == NULL){
            head1 = newNode1;
            return ;
        }else{
            newNode1->next = head1;
            head1 = newNode1;
        }
    }

    void push_front2(int val){
        ListNode* newNode2 = new ListNode(val);
        if(head2 == NULL){
            head2 = newNode2;
            return;
        }else{
            newNode2->next = head2;
            head2 = newNode2;
        }
    }

    ListNode* mergeTwoLists(ListNode* head1,ListNode* head2){
        if(head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2: head1;
        }
        if(head1->val <= head2->val){
            head1->next = mergeTwoLists(head1->next,head2);
            return head1;
        }
        else{
            head2->next = mergeTwoLists(head1,head2->next);
            return head2;
        }
    }

    void printList(ListNode* head) {
        while (head != NULL) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
};

int main()
{
    Node ll;
    ll.push_front1(6);
    ll.push_front1(3);
    ll.push_front1(1);
    ll.push_front2(5);
    ll.push_front2(3);
    ll.push_front2(2);
    ListNode* mergedHead = ll.mergeTwoLists(ll.head1, ll.head2);
    cout << "Merged sorted list: ";
    ll.printList(mergedHead);

    return 0;
}

