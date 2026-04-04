    // sum of even digits .
    // i/p1: n= 227733 o/p: 4
    // i/p2: n= 5672 o/p: 8

#include<stdio.h>
int main(){

    int num, ans=0, sum=0;
    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Even Digits are : ");
    for(;num;num=num/10){
        ans = num % 10;
        if(ans%2==0){
            printf("%d ", ans);
            sum = sum + ans;
        }
    }
    printf("\n");
    printf("Sum of even digits is : %d ", sum);

    printf("\n");
    return 0;
}