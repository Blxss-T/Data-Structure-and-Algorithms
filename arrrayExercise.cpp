#include <iostream>
using namespace std;
void display(int marks[][5],int r,int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int A[][5]={
    {12,14},
    {15,18}
    };
    display(A,2,5);
    int B[5][5]={{0}};
    display(B,5,5);
    return 0;
}