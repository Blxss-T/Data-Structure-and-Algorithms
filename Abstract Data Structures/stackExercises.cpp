#include <iostream>
using namespace std;
class Stack {
private:
    int capacity;
    int *arr;
    int topIndex;


public:
    Stack(int size) {
        this->capacity= size ;
        arr = new int[capacity];
        topIndex=-1;
    }
    bool isEmpty(){
        return topIndex==-1;
    }
    bool isFull() {
        return topIndex==capacity-1;
    }
    void push(int value) {
        if (isFull()) {
            cout<<"Stack overflow";
            return;
        }
        arr[++topIndex]=value;
    }
    void pop() {
        if (isEmpty()) {
            cout<<"Stack underflow";
            return;
        }
        topIndex --;
    }
    int peek() {
        if (isEmpty()) {
            cout<<"Stack is empty";
            return -1;
        }
        return arr[topIndex];
    }
};