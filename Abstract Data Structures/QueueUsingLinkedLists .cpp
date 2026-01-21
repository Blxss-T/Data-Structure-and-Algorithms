#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        this -> data=x;
        next =NULL;
    }
};
class Queue {
    Node*head;
    Node * tail;
    int size;
public:
    Queue() {
        head= null ;
        tail= null
        size =0;
    }
    int getSize() {
        return size;
    }
    int count () {
        ...;
    }
    bool isEmpty() {
        return  size==0;
    }
    void enqueue (int ele) {
        Node * n = new Node(ele);
        if (head == NULL) {
            head = n;
            tail=n;
        }
        else {
            tail->next=n;
            tail=n;
        }
        size ++;
    }
    void dequeue() {
        if (isEmpty()) {
            return;
        }
        Node * temp = head;
        head = head ->next;
        temp->next= NULL;

        delete temp;
        size --;
    }
    int front () {
        if (isEmpty()) {
            return 0 ;
        }
        return head->data;
    }
    void display() {
        Node *temp= head ;
        while (temp!=NULL) {
            cout<<temp->data<<"";
            temp=temp->next;
        }
    };
    int main () {
        Queue *q = new Queue();
        q->enqueue(10);
        q->enqueue(20);
        q->enqueue(30);
        q->enqueue(40);
        q->display();
        q->dequeue();
        q->display();

    }
};

