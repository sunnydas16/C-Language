#include<stdio.h>
int main(){

    int num = 123456,mid,i,count=0,temp,ans,anss,sum=0,ans2,rev=0;

    temp = num;

    for(;temp;temp/=10){
        count++;
    }
    count = count/2;
    mid = count;
    temp=num;
    for(;count;temp/=10){
        count--;
    }
    ans = temp%10;

    // count = count/2;
    if(mid%2!=0){
        temp=num;
        for(;temp;temp/=10){
            count++;
            anss = temp%10;
            rev = rev*10+anss;
        }
        count = count/2;
        for(;count;rev/=10){
            count--;
        }
        ans2 = rev%10;
        printf("middle digit is %d/%d", ans, ans2);
    }
    else
    printf("Middle dig is %d",ans);

    
    return 0;
}