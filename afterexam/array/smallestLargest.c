#include<stdio.h>
int main(){

    int size,i,j,S,L;
    printf("Enter size");
    scanf("%d", &size);

    int a[size];

    for(i=0;i<size;i++)
    scanf("%d", &a[i]);

    S = a[0];
    L = a[0];
    for(i=1;i<size;i++){
        if(S>a[i]){
            S = a[i];
        }
        if(L<a[i]){
            L = a[i];
        }
    }


        printf("\n");
        printf("Smallest : %d Largest : %d \n", S,L);

    
    return 0;
}