#include<stdio.h>
int main(){

    char s[20],ch;
    int index,i,len;

    printf("Enter the String ");
    scanf("%s", s);
    printf("Enter the Index ");
    scanf("%d", &index);
    printf("Enter the Char to insert ");
    scanf(" %c", &ch);

    for(len=0;s[len];len++);

    for(i=len+1;i>index;i--){
        s[i]=s[i-1];
    }
    s[i]=ch;

    printf("%s \n", s);



    return 0;
}