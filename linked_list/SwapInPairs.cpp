#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int _val) {
        val = _val;
        next = NULL;
    }
};

class ListNode{
public:
Node* head;
Node* tail;
public:
ListNode(){
    head = tail = NULL;
}

void push_front(int val){ //O(1)
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return ; 
    }else{
        newNode->next = head;
        head = newNode;
    }
}



    Node* swapPairs(Node* head) {
        if(head == NULL || head->next == NULL)
            return head;


            Node* prev = NULL;
            Node* first = head;
            Node* sec = head->next;

            while(first != NULL && sec != NULL){
                Node* third = sec->next;
                sec->next = first;
                first->next = third;

                if(prev != NULL){
                    prev->next = sec;
                } else{
                    head = sec;
                }

                //updation 
                prev = first;
                first = third;
                if(third != NULL){
                    sec = third->next;
                }else{
                    sec = NULL;
                }
        }
        return head;
    }
    void printLL(){ //O(n)
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
 ListNode ll;
 ll.push_front(1);
 ll.push_front(2);
 ll.push_front(3);
 ll.push_front(4);
 ll.printLL();
 ll.head=ll.swapPairs(ll.head);
 ll.printLL();
 return 0;
}