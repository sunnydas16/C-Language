#include<stdio.h>
int main(){

    int size,i,j,t;

    printf("Enter the size ");
    scanf("%d", &size);

    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    for(i=0,j=1;i<size-1;i+=2,j+=2){
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}