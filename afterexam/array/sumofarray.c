#include<stdio.h>
int main(){

    int size,ele,L,i,sum=0;

    printf("size of array");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    scanf("%d", arr+i);

    for(i=0;i<size;i++)
        sum = sum + arr[i];

    printf("%d",sum);
    
    
    return 0;
}