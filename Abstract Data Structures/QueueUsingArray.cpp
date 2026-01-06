#include <iostream>
using namespace std;
int n= 100;
int arrQueue[n],front =-1,rear =-1;
void enqueue(int value) {
    if (rear == n-1) {
        return;
        cout<<"Queue is overflown";
    }else{}
    if (front == -1)
        front=0;
        cout<<"Insert element in the queue: "<<endl;
    rear = rear + 1;
    arrQueue[rear]=value;
}
void display() {
    if (front ==-1)
        cout<<"Is empty"<<endl;
    else {
        for (int i=front;i<=rear;i++) {
            cout<<
    }



    }
}
