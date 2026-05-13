#include<stdio.h>
int main(){

    int arr[] = {10,20,30,40,50};
    int i,ele;
    ele = sizeof(arr)/sizeof(arr[0]);

    int *p = arr;

    for(i=0;i<ele;i++){
        printf("%u ", *p);
        p++;
    }
 
    return 0;
}