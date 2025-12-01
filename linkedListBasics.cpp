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
            cout<<head
        }
    }
};
int main() {
    Node *n1= new Node(10);
    Node *n2= new Node(20);
    n1->next=n2;
    cout<<n1->data<<endl;
}
