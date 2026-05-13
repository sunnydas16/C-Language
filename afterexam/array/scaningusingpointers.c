#include<stdio.h>
int main(){

    int arr[5],i;

    int *p = arr;

    for(i=0;i<5;i++){
        scanf("%d", p+i);
    }

    for(i=0;i<5;i++){
        printf("%d ", *p+i);
    }
    
    return 0;
}