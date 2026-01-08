#include <iostream>
using namespace std;
int n=10;
int qArray[n],front =-1,rear=-1;
void enqueue(int x) {
    //check if its not full
    if (rear==n-1) {
        cout<<"Queue is full\n";
        return;
    }
    if (front == -1) {
        front =0;
    }
    rear++;
    qArray[rear]=x;
}
void displayQueue() {
    if (front==-1) {
        cout<<"Queue is empty\n";
        return;
    }
    for (int i= front;i<=rear;i++) {
        cout<<qArray[i]<<" ";
    }
    cout<<endl;
}
void dequeue() {
    if (front==-1||front >rear) {
        cout<<"Queue is empty\n";
        return;
    }
    front++;
}