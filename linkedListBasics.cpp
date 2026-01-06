// #include<iostream>
// using namespace std;
// class Node {
//     // in class all is private by default
// public:
//     int data;
//     Node *next;
//     Node (int data) {
//         this->data =data;
//         this->next=NULL;
//     }
//
// };
// class LinkedList {
//     Node *head;
// public:
//     LinkedList() {
//         head=NULL;
//     }
//     void display() {
//         Node *temp=head;
//         while (head->next!=NULL) {
//             cout<<temp->data<<endl;
//             temp=temp->next;
//         }
//     }
// };
// Node* insertAtBeginning(Node*head,int data) {
//     Node *n1= new Node(data);
//     if (head==NULL) {
//         head=n1;
//     }
//     n1->next=head;
//     head=n1;
//
// }
// Node* insertsAtBack(Node *head,int data) {
//     Node *n1= new Node(data);
//     if (head==NULL) {
//         head=n1;
//         return head;
//     }
//     while (head->next!=NULL) {
//         head=head->next;
//     }
// }
// int main() {
//     int x;
// cout<<"Enter any data:"<<endl;
//     cin>>x;
//
//
//
//
// }
