// #include <iostream>
// using namespace std;
//
// class Node {
//     public :
//         int data ;
//     Node *next;
//
// };
// void display(Node *head ) {
//     while (head!=nullptr) {
//         cout<<head->data<<"";
//         head =head->next;
//     }
// }
// Node* reverse(Node* head) {
//     // make head our current node
//     Node * current= head ;
//     // make previous pointing to null
//     Node *previous=NULL;
//     Node * n =NULL;
//     // we need to loop until current or head pointin to null
//     while (current!=NULL) {
//         //save the next element
//         n= current->next;
//         //instead of pointing to next element , point to previous
//         current->next=previous;
//         // move pointers one position ahead
//         previous = current;
//         current = n ;
//     }
//     // the last prev is our head
//     return previous;
//
// }
// //Merge sorting of linked lists
// Node *merge(Node *a, Node *b) {
//     //base case
//     if (a== NULL)
//         return b;
//     if (b== NULL)
//         return a;
//     //recursive case
//     //take a head pointer
//     Node *c;
//     if (a->data<b->data) {
//         c=a;
//         c->next=merge(a->next,b);
//     }
//     else {
//
//         c=b;
//         c->next=merge(a,b->next);
//     }
//     return c;
//
// }
// Node *midpoint (Node *head)
// // Node * addAtTail(Node *head , int data) {
// //     Node *temp = head;
// //     Node *newNode=new Node (500);
// // }
// // Node *insertAtPos(Node*head, int i , int data) {
// //     if (i<0) {
// //         return head;
// //     }
// //     if (i==0) {
// //         Node *n = new Node(data);
// //         n->next= head;
// //         head =n ;
// //         return head;
// //     }
// //     Node * temp = head ;
// //     int count =1;
// //     while (count <=i-1&&head!=NULL) {
// //         head=head->next;
// //         count ++;
// //     }
// //     if (head) {
// //         Node n= new Node(data);
// //         n->next=head->next;
// //         head->next=n;
// //
// //     }
// //     Node* deleteFirstNode(Node* head) {
// //         if (head== NULL)
// //             return NULL;
// //         // move the head pointer to the next node
// //         Node* temp =head ;
// //         head = temp->next;
// //         delete temp;
// //         return head;
// //
// //     }
// // }
// // Node * deleteLastNode(Node* head) {
// //     if (head == NULL)
// //         return NULL;
// //     if (head->next==NULL) {
// //         delete head;
// //         return NULL;
// //     }
// //     Node * second_last= head ;
// //     while (second_last->next->next != NULL)
// //         second_last= second_last->next;
// //     //delete last node
// //     delete(second_last->next);
// //     //change next of second last
// //     second_last->next=NULL;
// //     return head;
// // }
// int main () {
// // //     Node *n1 = new Node();
// // //     Node *n2 = new Node();
// // //     Node *n3 = new Node();
// // //     Node *n4 = new Node();
// // //     n1->data=10;
// // //     n1->next=n2;
// // //     n2->data=20;
// // //     n2->next=n3;
// // //     n3->data=30;
// // //     n3->next=n4;
// // //     n4->data=10;
// // //     n4->next=nullptr;
// // //     display(n1);
// // //     return 0;
//
// }