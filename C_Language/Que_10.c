#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5};
    int cnt1=0;
    int cnt2=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<len;i++){
        if(arr[i]%2==0){
            cnt1+=1;
        }
        else{
            cnt2+=1;
        }
    }
    printf("no of odd no: %d\n",cnt2);
    printf("no of even no: %d",cnt1);
    return 0;
}