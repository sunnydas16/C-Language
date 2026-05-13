#include<stdio.h>

int main(){

    int n,i,j,sum=0,k;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++){
        j=i+1;
        k=0;
        k = j*j;
        a[i]=k;
        sum = sum+k;
    }

    for(i=0;i<n;i++)
    printf("%d ", a[i]);
printf("\n");
    printf("%d \n", sum);
    
    return 0;
}
