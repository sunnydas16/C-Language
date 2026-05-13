#include<stdio.h>

int main(){

    int a[7],len,i,k,j,count;

    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the Number ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    printf("Before : ");
    for(i=0;i<len;i++)
    printf("%d ",a[i]);
printf("\n");

    for(i=0;i<len;i++){
        for(j=2;j<a[i];j++){
            if(a[i]%j==0)
            break;
        }
        if(a[i]==j){
            printf("%d ", a[i]);

            for(k=i;k<len;k++){
                a[k]=a[k+1];
            }
            i--;
            len--;

        }
    }

    printf("\n");
    printf("Without Prime ");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);

    return 0;
}


