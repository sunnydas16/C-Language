#include<stdio.h>

int main(){
    int a[10],len,i,j,count;
    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the Elements : ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    printf("Before : ");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);

    printf("\n");
    printf("NON REPEATED ARE : ");

    for(i=0;i<len;i++){
        count=0;
        for(j=0;j<len;j++){
            if(a[i]==a[j]){
                count++;

            }
        }
        if(count==1){
            printf("%d ", a[i]);

        }
    }

   return 0; 
}