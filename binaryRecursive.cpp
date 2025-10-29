#include <iostream>
using namespace std;
int binary_function(int a[] ,int low,int high, int target) {
    int mid=(low+high)/2;
    if (low>high)
        return -1;

        if (a[mid]==target)
            return mid;

        else if (a[mid]>target)
            return binary_function(a,low,mid-1,target);

        else
            return binary_function(a,mid+1);

    }
int main () {
}