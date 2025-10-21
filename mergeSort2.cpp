#include <iostream>
using namespace std;
void mergeArrays(int x[],int y[],int a,itn s ,int e) {
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    while (i<=mid&&j<=e) {
        if (x[i]<y[j]) {
            a[k]=x[i];
            i++;
            k++;
        }else {
            a[k]=y[j];
            j++;
            k++;
        }
    }
    while (i<=mid) {
        a[k]=x[i];
        k++;
        i++;
    }
    while (j<=e) {
        a[k]=y[j];
        k++;
        j++;
    }
}
void mergeSort(int a[],int s,int e) {
    if (s>=e) {
        return;
    }

}