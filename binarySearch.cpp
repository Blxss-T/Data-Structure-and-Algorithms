#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key) {
    int s =0;
    int e=n-1;
    while (s<=e) {
        int mid=(s+e)/2;
        if (a[mid]==key) {
            return mid;
        }
        else if (a[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;

}