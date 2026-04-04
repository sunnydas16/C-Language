#include<stdio.h>
int main(){

    int num, no_of_rotn, pos;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Enter Number of Rotation : ");
    scanf("%d", &no_of_rotn);



    printf("Before : ");
    for(pos=31; pos>=0; pos--){
        printf("%d", num>>pos&1);
        if(pos%8==0){
            printf(" ");
        }
    }

    num = num>>no_of_rotn | num<<(32-no_of_rotn);
    
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