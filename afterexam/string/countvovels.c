#include<stdio.h>
int main(){

    char s[20];

    printf("Enter the String ");
    scanf("%s", s);

    int i,count=0;
    for(i=0;s[i];i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u')
        count++;
    }

    printf("Total Vovels are %d \n", count);

    return 0;
}