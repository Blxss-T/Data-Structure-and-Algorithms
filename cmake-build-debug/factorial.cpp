#include<iostream>
using namespace std;

int fact(int n){
    if(n < 0) return -1;
    if(n==0) return 1;
    int smallerAnswer = fact(n-1);
    return n*smallerAnswer ;
}

int main(){
    int n=5;
    int answer = fact(n);
    cout<<answer <<endl;
    return 0;
}
