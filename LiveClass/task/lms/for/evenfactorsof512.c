// WAP in C to print even factor of 512.

#include<stdio.h>
int main(){

    int num, i;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Even factors are : ");

    for(i=1; i<=num; i++){
        if(num%i==0){
            if(i%2==0){
                printf("%d ", i);
            }
        }
    }
    
    printf("\n");
    return 0;
}