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

    for(i=0;i<len;i++){
        count=0;
        for(j=i+1;j<len;){
            if(a[i]==a[j]){
                count++;
                for(k=j;k<len;k++){
                    a[k]=a[k+1];
                }
                j--;
                len--;
                for(k=i;k<len;k++){
                    a[k]=a[k+1];
                }
                i--;
                len--;
                
            }
            else{
                j++;
            }
        }
    }

    printf("\n");
    printf("NON REPEATED : ");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);

    return 0;
}
