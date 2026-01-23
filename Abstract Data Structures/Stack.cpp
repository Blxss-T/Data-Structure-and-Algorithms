#include <iostream>
using namespace std;
template <typename T>
class Node {
    T data;
    Node <T> * next;
public:
    Node (Tdata) {
        this ->data = data;
        next=NULL;
    }
};
template <typename T>
class Stack {
    Node <T> *head;
    int size ;
public:
    Stack() {
        head= NULL;
        size=0;
    }
    bool isEmpty() {
        if (head== nullptr) {
            return true;
        }
    }
    void push(T ele) {
        Node<T> * newNode= new Node<T>;
        if (head == nullptr) {
            head =newNode;
        }
        else {






            
        }
    }
};