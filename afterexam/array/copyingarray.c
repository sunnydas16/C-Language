#include<stdio.h>
int main(){

    int a[5] = {10,20,30,40,50};
    int b[5];

    int i;

    for(i=0;i<5;i++){
        b[i]=a[i];
    }

    printf("\n");
    for(i=0;i<5;i++){
        printf("%d ", i[b]); // b[i], *(b+i) *(i+a);
    }
    
    return 0;
}