#include<stdio.h>
int main(){

    int size,i,j,t;

    printf("Enter the Size : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the Elements : ");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Before : ");
    for(i=0;i<size;i++)
    printf(" %d ", arr[i]);

    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                t = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }

    printf("\n");
    printf("After  : ");
    for(i=0;i<size;i++)
    printf(" %d ", arr[i]);


    return 0;
}