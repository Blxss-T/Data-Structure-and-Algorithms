#include <iostream>
using namespace std;
 class Node {
 public:
     int data;
     Node* next;
 public:
    Node (int value) {
        data=value;
        next=nullptr;
    }
 };
class linkedList {
private:
    Node* head;
public:
    linkedList() {
        head=nullptr;
    }

    void insertAtEnd(int val) {
        Node* newNode= new Node(val);
        if (head== nullptr) {
            head=newNode;
            return;
        }
        Node* temp= head;
        while (temp->next != nullptr) {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void insertAtBegining(int val) {
        Node* newNode= new Node(val);
        if (head== nullptr) {
            head=newNode;
        }
        newNode->next=head;
        head = newNode;
    }
    void deleteAtBeginning() {
        if (head==nullptr) {
            return;
        }
        Node* temp= head;
        head=temp->next;
    }
    void traverseLinkedList() {
        if (head== nullptr) {
            cout<<"Is empty"<<endl;
        }
        Node* temp=head;
        while (temp->next!= nullptr) {
            cout<<temp->data<<"->";
            temp= temp->next;
        }

    }
};