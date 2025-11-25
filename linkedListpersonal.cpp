#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
void traverse(Node* head) {
    Node* current=head;
    while (current->next!=NULL) {
        cout<<current->next<<"->"<<endl;
    }

}

 int main () {
     Node* head=new Node();
     Node* second = new Node();
     Node* third = new Node();
     head->data=10;
     head->next=second;
     second->data=20;
     second->next=third;
     third->data=30;
     third->next=NULL;



 }