#include <iostream>
using namespace std;
int fun1(int n) {
    int m=0;
    for (int i =0; i < n; i++) {
        m+=1;
    }
    return m;
}
int main() {
    std::cout<<"N =100, Number of instructions O(n)::" << fun1(100)<<endl;
    return 0;
    }