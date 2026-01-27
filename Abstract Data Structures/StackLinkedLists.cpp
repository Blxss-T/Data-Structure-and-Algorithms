#include<iostream>
using namespace std;
class  Node{
public:
    int value;
    Node * next;
public:
    Node (int val) {
        this->value=val;
        this->next=nullptr;
    }
};
class linkedList {
    Node * head;
    linkedList() {
        head=nullptr;
    }
    bool isEmpty() {
        return head==nullptr;
    }

    void push(int value) {
        Node* newNode= new Node(value);
        if (head== nullptr) {
            head=newNode;
            return;
        }
        // Node* temp=head;
        // while (temp->next!=nullptr) {
        //     temp= temp->next;
        // }
        // temp->next=newNode;
        newNode->next=head;
        head= newNode;
    }

    void pop(int val) {
        if (head==nullptr) {
            cout<<"Stack underflow";
            return;
        }
        if (head->value==val) {
            Node*temp=head;
            head=head->next;
            delete temp;
            return;
        }
        // Node* temp=head;
        // while (temp->next->next!=nullptr) {
        //     temp= temp->next;
        // }
        // delete temp->next;

    }
};