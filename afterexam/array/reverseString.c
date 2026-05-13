#include<stdio.h>
int main(){

    char arr[5];

    printf("Enter the String : ");
    scanf("%[^\n]", arr);

    int i,len;

    for(i=0;arr[i];i++);

    len = i;
    for(i=len-1;arr[i];i--)
    printf("%c", arr[i]);
    return 0;
}