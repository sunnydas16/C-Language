#include<stdio.h>

int main(){

    int a[6], len, i,rev,temp,ans,k;
    len = sizeof(a)/sizeof(a[0]);
    printf("Enter the Number ");
    for(i=0;i<len;i++)
    scanf("%d", &a[i]);

    for(i=0;i<len;i++){

        rev=0;
        temp=a[i];
        for(;temp;temp=temp/10){
            ans = temp%10;
            rev= rev*10+ans;
        }
        if(a[i]==rev){
            if(a[i]%2!=0){
                // printf("%d ", a[i]);
                for(k=i;k<len;k++){
                    a[k]=a[k+1];
                }
                len--;
                i--;
            }
        }
    }

    for(i=0;i<len;i++)
    printf("%d ", a[i]);



    return 0;
}