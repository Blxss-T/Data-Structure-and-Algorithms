#include <iostream>
using namespace std;
 int recursiveCounter (int n) {
     if (n==0) return 0;
     recursiveCounter(n-1);
     cout<<"Recursive counter is "<<n<<endl;
 }
int main() {
     recursiveCounter(52);
 }