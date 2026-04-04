// WAP in C to print all odd factor of 900

#include<stdio.h>
int main(){

    int num, i;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Odd Factors of %d are : ", num);
    for(i=1;i<=900; i++){
        if(num%i==0){
            if(i%2!=0){
                printf("%d ", i);
            }
        }
    }

    printf("\n");
    return 0;
}