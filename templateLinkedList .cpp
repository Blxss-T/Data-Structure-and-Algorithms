#include <iostream>
using namespace std;
template <typename  T>

class Node {
    public :
        T data ;
    Node *next;
    Node (T d ) {
        data=d;
        next=nullptr;
    }

};
template <typename T>
void display(Node<T> *head ) {
    while (head!=nullptr) {
        cout<<head->data<<"";
        head =head->next;
    }
}
int main () {
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=nullptr;
    display(n1);
    return 0;




}