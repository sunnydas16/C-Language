#include<stdio.h>
int main(){

    int size,i,j,t,L;

    printf("Enter the size ");
    scanf("%d", &size);

    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    L=arr[0];

    for(i=1;i<size;i++){
        if(arr[i]>L){
            L = arr[i];
            printf("%d ", L);
        }
    }

    printf("\n");
    printf("%d ",L);
    

    return 0;
}