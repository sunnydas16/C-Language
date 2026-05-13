#include<stdio.h>

void reverse_arr(int *,int);

int main(){

    int a[5],len,i;

    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the Elements ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    reverse_arr(a,len);

    return 0;
}

void reverse_arr(int *a,int len){

    int i,j,t;
    for(i=0,j=len-1;i<j;i++,j--){
        t = a[i];
        a[i]=a[j];
        a[j]=t;
    }

    printf("\n");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);

}

