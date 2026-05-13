#include<stdio.h>

int main(){

    int a[5],len,i,k,j,len2;

    len = sizeof(a)/sizeof(a[0]);
    len2=len;
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    printf("\n");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);

    for(i=0;i<len;i++){
        for(j=i+1;j<len;){
            if(a[i]==a[j]){
                for(k=i;k<len-1;k++){
                    a[k]=a[k+1];
                }
                len--;
            }
            else{
                j++;
            }
        }
    }


    printf("\n");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);


    return 0;
}


