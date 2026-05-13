#include<stdio.h>
int main(){

    int i,j,ele,t;
    int arr[] = {23,67,43,15,87,35};

    ele = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<ele;i++)
    printf(" %d ", arr[i]);
    printf("\n");
    for(i=0;i<ele;i++){
        for(j=i+i;j<ele;j++){
            if(arr[i]>arr[j]){
                t = arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    for(i=0;i<ele;i++)
    printf(" %d ", arr[i]);

    return 0;
}