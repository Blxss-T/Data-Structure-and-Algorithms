// #include <iostream>
// using namespace std;
//
// // node class
// class Node {
// public:
//     int data;
//     Node* next;
//
//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };
//
// // c...linked list
// class CircularLinkedList {
// private:
//     Node* head;
//
// public:
//     CircularLinkedList() {
//         head = NULL;
//     }
//
//     // Insert at beginning
//     void insertAtBeginning(int value) {
//         Node* newNode = new Node(value);
//
//         // checking If list is empty
//         if (head == NULL) {
//             head = newNode;
//             newNode->next = head;   // points to itself
//             return;
//         }
//
//         Node* temp = head;
//
//         // jump to the last node
//         while (temp->next != head) {
//             temp = temp->next;
//         }
//
//         temp->next = newNode;   // last -> new node
//         newNode->next = head;   // new -> old head
//         head = newNode;         // update head
//     }
//
//     // INSERT AT END
//     void insertAtEnd(int value) {
//         Node* newNode = new Node(value);
//
//         if (head == NULL) {
//             head = newNode;
//             newNode->next = head;
//             return;
//         }
//
//         Node* temp = head;
//
//         while (temp->next != head) {
//             temp = temp->next;
//         }
//
//         temp->next = newNode;
//         newNode->next = head;
//     }
//     //traversing the linked list
//     void traverse() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//
//         Node* temp = head;
//
//         do {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         } while (temp != head);
//
//         cout << "(back to head)\n";
//     }
//
//     // DELETE A VALUE
//     void deleteValue(int value) {
//         if (head == NULL) {
//             cout << "List is empty!\n";
//             return;
//         }
//
//         Node* curr = head;
//         Node* prev = NULL;
//
//         // Case 1: Only one node
//         if (curr->data == value && curr->next == head) {
//             delete curr;
//             head = NULL;
//             return;
//         }
//
//         // Case 2: Deleting head
//         if (curr->data == value) {
//             while (curr->next != head) {
//                 curr = curr->next;
//             }
//             curr->next = head->next;
//             delete head;
//             head = curr->next;
//             return;
//         }
//
//         // Case 3: Deleting middle or last node
//         prev = head;
//         curr = head->next;
//
//         while (curr != head) {
//             if (curr->data == value) {
//                 prev->next = curr->next;
//                 delete curr;
//                 return;
//             }
//             prev = curr;
//             curr = curr->next;
//         }
//
//         cout << "Value not found!\n";
//     }
//
//     // DISPLAY LIST
//     void display() {
//         if (head == NULL) {
//             cout << "List is empty!\n";
//             return;
//         }
//
//         Node* temp = head;
//
//         do {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         } while (temp != head);
//
//         cout << "(back to head)\n";
//     }
//
//     // DESTRUCTOR (CLEAN MEMORY)
//     ~CircularLinkedList() {
//         if (head == NULL)
//             return;
//
//         Node* curr = head->next;
//
//         while (curr != head) {
//             Node* temp = curr;
//             curr = curr->next;
//             delete temp;
//         }
//
//         delete head;
//     }
// };
//
//
// int main() {
//     CircularLinkedList list;
//
//     // Insert operations
//     list.insertAtBeginning(10);
//     list.insertAtBeginning(20);
//     list.insertAtBeginning(30);
//
//     list.insertAtEnd(40);
//     list.insertAtEnd(50);
//
//     cout << "Circular List: ";
//     list.display();
//
//     // Delete operations
//     // cout << "\nDeleting 30...\n";
//     // list.deleteValue(30);
//     // list.display();
//     //
//     // cout << "\nDeleting 50...\n";
//     // list.deleteValue(50);
//     // list.display();
//     //
//     // cout << "\nDeleting 10...\n";
//     // list.deleteValue(10);
//     // list.display();
//     list.traverse();
//
//     return 0;
// }
