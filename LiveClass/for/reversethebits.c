#include<stdio.h>
int main(){

    int num, pos, i, j, m,n;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Before : ");
    for(pos=31; pos>=0; pos--){
        printf("%d", num>>pos&1);
        if(pos%8==0){
            printf(" ");
        }
    }

    for(i=0,j=31; i<j; i++,j--){
        m = num>>i&1;
        n = num>>j&1;
        if(m!=n){
            num = num^1<<i;
            num = num^1<<j;
        }
    }

    printf("\n");
    printf("After  : ");
    for(pos=31; pos>=0; pos--){
        printf("%d", num>>pos&1);
        if(pos%8==0){
            printf(" ");
        }
    }

    return 0;
}