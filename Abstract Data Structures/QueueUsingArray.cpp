#include <iostream>
using namespace std;
int n= 100;
int arrQueue[n],front =-1,rear =-1;
void enqueue(int value) {
    if (rear == n-1) {
        return;
    }
    if (front = -1) {
        front ++;
    }
    rear = rear + 1;
    arrQueue[rear]=value;
}
void display() {
    for (int i=front;i<=rear;i++) {

    }
}
