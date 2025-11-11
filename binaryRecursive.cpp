// #include <iostream>
// using namespace std;
// int binaryRecursive(int a[] ,int low,int high, int target) {
//     int mid=(low+high)/2;
//     if (low>high)
//         return -1;
//
//         if (a[mid]==target)
//             return mid;
//
//         else if (a[mid]>target)
//             return binaryRecursive(a,low,mid-1,target);
//
//         else
//             return binaryRecursive(a, mid + 1, high, target);
//
//     }
// int main () {
//     int a[]={1,2,3,4,5,6,6,7,8,9};
//     int low=0;
//     int n= sizeof(a)/sizeof(a[0]);
//     int high=n-1;
//     int target=8;
//     cout<<binaryRecursive(a,low,high,target)<<endl;
//     int targetValue =binaryRecursive(a,low,high,target);
//     cout<<a[targetValue]<<endl;
// }