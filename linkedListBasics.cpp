#include<iostream>
using namespace std;
class Node {
    // in class all is private by default
public:
    int data;
    Node *next;
    Node (int data) {
        this->data =data;
        this->next=NULL;
    }

};
class LinkedList {
    Node *head;
public:
    LinkedList() {
        head=NULL;
    }
    void display() {
        Node *temp=head;
        while (head->next!=NULL) {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
Node* insertAtBeginning(Node*head,int data) {
    Node *n1= new Node(10);
    if (head==NULL) {
        head=n1;
    }
    while
}
int main() {

    Node *n2= new Node(20);
    n1->next=n2;
    cout<<n1->data<<endl;
    LinkedList list;
    list.display();
}
