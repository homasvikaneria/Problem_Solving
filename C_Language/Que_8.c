// 8. Find the Average of an Array.
#include <stdio.h>
#include <string.h>

int main() {
    int avg,cnt;
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<len;i++){
        cnt+=arr[i];
    }
    avg=cnt/len;
    printf("%d",avg);
    return 0;
}