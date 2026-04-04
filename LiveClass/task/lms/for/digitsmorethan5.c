//WAP in C to count digits more than 5
    // i/p1: n= 449961 o/p: 3
    // i/p2: n= 567 o/p: 2

#include<stdio.h>
int main(){

    int num, ans=0, count=0;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Digits more than Five are : ");
    for(;num;num=num/10){
        ans = num % 10;
        if(ans >= 5){
            count++;
        }
    }
    printf("%d ", count);

    printf("\n");
    return 0;
}