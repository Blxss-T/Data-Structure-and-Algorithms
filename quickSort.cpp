#include <iostream>
using namespace std;

void quickSort(int arr[],int low,int high) {
    if (low<high) {
        int pi=partion(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int partition (int a[],low, int high)
int main () {
    int low=arr[0];
    int high =arr[n-1];
}