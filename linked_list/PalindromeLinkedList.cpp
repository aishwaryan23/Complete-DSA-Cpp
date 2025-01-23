#include<iostream>
using namespace std;


class node{
public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
public:
    node* head;

    LinkedList(){
        head = NULL;
    }

    void push_front(int val){
        node* newNode = new node(val);
        if(head == NULL){
            head = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    node* reverseList(node* head){
        node* prev = NULL;
        node* curr = head;
        node* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(node* head) {
        node* slow = head;
        node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        node* secondHalf = reverseList(slow);
        node* firstHalf = head;

        while(secondHalf != NULL){
            if(firstHalf->data != secondHalf->data){
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        return true;  
    }
    void printList()
    {
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<" NULL";
    }
};

int main()
{
    LinkedList ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    cout << (ll.isPalindrome(ll.head) ? "\nPalindrome" : "\nNot a Palindrome");
    return 0;
}