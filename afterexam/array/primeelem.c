#include<stdio.h>
int main(){

    int size,i,j;

    printf("Enter the size ");
    scanf("%d", &size);

    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("Prime Numbers : ");
    for(i=0;i<size;i++){
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0)
            break;
        }
        if(arr[i] == j){
            printf("%d ", j);
        }
    }

    return 0;
}