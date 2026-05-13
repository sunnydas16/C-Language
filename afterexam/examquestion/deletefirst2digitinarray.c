#include<stdio.h>
int main(){

    int a[] = {3245,212,65432,6777,843};

    int len,i,j,temp,tmp,ans,ans2,rev,rev2,num;

    len = sizeof(a)/sizeof(a[0]);

    for(i=0;i<len;i++)
    printf("%d ", a[i]);

    for(i=0;i<len;i++){
        rev=0;
        rev2=0;
        num = a[i];
        temp = num;
        for(;temp;temp/=10){
            ans = temp%10;
            rev = rev*10+ans;
        }
        for(j=0;j<2;j++){
            rev = rev/10;
        }
        tmp=rev;
        for(;tmp;tmp/=10){
            ans2 = tmp%10;
            rev2 = rev2*10+ans2;
        }
        a[i]=rev2;
        
    }

    printf("\n");
    printf("After ");
    for(i=0;i<len;i++)
    printf("%d ", a[i]);

    return 0;
}