#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high) {
    int n=mid-low+1;
    int m=high-mid;
    int L[n];s
    int R[m];
    int k=low;
    int i=0;
    int j=0;
    for (int i=0;i<n;i++) {
        L[i]=arr[low+i];
    }
    for (int j=0;j<m;j++) {
        R[j]=arr[mid+1+j];
    }
    while (i<n&&j<m) {
        if (L[i]<R[j]) {
            arr[k]=L[i];
            i++;
        }else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<n) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<m) {
        arr[k]=R[j];
        j++;
        k++;
    }

}
void mergeSort(int arr[],int low, int high) {
    if (low==high)return;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void display(int arr[],int n) {
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
}
int main() {
int arr[]={9,3,4,5,7,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    mergeSort(arr,low,high);
    display(arr,n);
}