// #include <iostream>
// using namespace std;
//
// // Node class
// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;
//
//     Node(int value) {
//         data = value;
//         prev = NULL;
//         next = NULL;
//     }
// };
//
// // DOUBLY LINKED LIST
// class DoublyLinkedList {
// private:
//     Node* head;
//
// public:
//     DoublyLinkedList() {
//         head = NULL;
//     }
//
//     //  INSERT AT BEGINNING
//     void insertAtBeginning(int value) {
//         Node* newNode = new Node(value);
//
//         if (head != NULL) {
//             head->prev = newNode;
//             newNode->next = head;
//         }
//
//         head = newNode;
//     }
//
//     // INSERT AT END
//     void insertAtEnd(int value) {
//         Node* newNode = new Node(value);
//
//         if (head == NULL) {
//             head = newNode;
//             return;
//         }
//
//         Node* temp = head;
//
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//
//         temp->next = newNode;
//         newNode->prev = temp;
//     }
//
//     // DELETE A VALUE
//     void deleteValue(int value) {
//         if (head == NULL) {
//             cout << "List is empty!\n";
//             return;
//         }
//
//         Node* temp = head;
//
//         while (temp != NULL && temp->data != value) {
//             temp = temp->next;
//         }
//
//         if (temp == NULL) {
//             cout << "Value not found!\n";
//             return;
//         }
//
//         // If deleting head
//         if (temp == head) {
//             head = temp->next;
//             if (head != NULL)
//                 head->prev = NULL;
//         }
//         else {
//             temp->prev->next = temp->next;
//             if (temp->next != NULL)
//                 temp->next->prev = temp->prev;
//         }
//
//         delete temp;
//     }
//
//     //DISPLAY FORWARD
//     void displayForward() {
//         Node* temp = head;
//
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->next;
//         }
//
//         cout << "NULL\n";
//     }
//     // there are two types of traversing in doubly forward and backward
//     //Forward traversing
//     void traverseForward() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//
//         Node* temp = head;
//
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->next;
//         }
//
//         cout << "NULL\n";
//     }
// //backward
//     void traverseBackward() {
//         if (tail == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//
//         Node* temp = tail;
//
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->prev;
//         }
//
//         cout << "NULL\n";
//     }
// };
//
//
//     // DISPLAY BACKWARD
//     void displayBackward() {
//         if (head == NULL)
//             return;
//
//         Node* temp = head;
//
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//
//         while (temp != NULL) {
//             cout << temp->data << " <-> ";
//             temp = temp->prev;
//         }
//
//         cout << "NULL\n";
//     }
//
//     //DESTRUCTOR
//     ~DoublyLinkedList() {
//         Node* temp;
//
//         while (head != NULL) {
//             temp = head;
//             head = head->next;
//             delete temp;
//         }
//     }
// };
//
// // int main() {
// //     DoublyLinkedList list;
// //
// //     // Insert at beginning
// //     list.insertAtBeginning(10);
// //     list.insertAtBeginning(20);
// //     list.insertAtBeginning(30);
// //
// //     // Insert at end
// //     // list.insertAtEnd(40);
// //     // list.insertAtEnd(50);
// //     //
// //     // cout << "Forward: ";
// //     // list.displayForward();
// //     //
// //     // cout << "Backward: ";
// //     // list.displayBackward();
// //
// //     // Delete a value
// //     // cout << "\nDeleting 30...\n";
// //     // list.deleteValue(30);
// //     //
// //     // cout << "Forward After Deletion: ";
// //     // list.displayForward();
// //     //
// //     // cout << "Backward After Deletion: ";
// //     // list.displayBackward();
// //
// //     return 0;
// // }
