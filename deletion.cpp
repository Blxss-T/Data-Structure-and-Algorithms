# include <iostream>
using namespace std;
 int main() {
     int scores[]={52,78,75,68,88,63,75,90,78};
     int len = sizeof(scores)/sizeof(scores[0]);
     for (int i=3;i<len;i++) {
         scores[i]=scores[i+1];
     }
     len--;
     for (int i=0;i<len;i++) {
         cout<<scores[i]<<endl;
     }
     return 0;
 }