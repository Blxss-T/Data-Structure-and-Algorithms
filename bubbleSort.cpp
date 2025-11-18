// #include <iostream>
// using namespace std;
// void bubbleSort(int a[],int n) {
//     int counter=0; check=0;
//     cout<<"Display before sorting";
//     for (int k=0;k<n;k++) {
//         cout<<a[k]<<" ";
//     }
//
//       for (int i=0;i<n-1;i++) {
//           for (int j=0;j<n-1;j++) {
//               int temp;
//               if (a[j]>a[j+1]) {
//                   temp =a[j];
//                   a[j]=a[j+1];
//                   a[j+1]=temp;
//               }
//           }
//       }
//     cout<<"Display after sorting";
//
//     for (int t=0;t<n;t++) {
//         cout<<a[t];
//     }
// }
// int main () {
//     int n=5;
//     int a[n]={50,40,20,30,10};
//     bubbleSort(a,n);
//
// }
#include <iostream>
using namespace std ;
int bubbleSort(int arr[],int size) {
    for (int i =0;i<size;i++) {
        for (int j=0;j<=size-i;j++) {
            if (arr[j]<arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main() {

}