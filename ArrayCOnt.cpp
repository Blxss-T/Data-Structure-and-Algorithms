#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    cout<<"The first element is" << arr[0] << endl;
    cout<<"The first element using pointer" <<* arr<< endl;
    //the name of the array is a pointer to the first element of an array.
    for (int i =0;i<5;i++) {
        cout<<(*arr+i)<<" ";
    }
    cout << endl;
    return 0;

}