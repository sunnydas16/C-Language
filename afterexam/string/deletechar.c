#include<stdio.h>
int main(){

    char s[20],ch;
    int i,j;

    printf("Enter the String : ");
    scanf("%s", s);

    printf("Enter the Char to Del : ");
    scanf(" %c", &ch);

    for(i=0;s[i];i++){
        if(s[i]==ch){
            for(j=i;s[j];j++){
                s[j]=s[j+1];
            }
            i--;
        }
    }

    printf("%s ", s);


    return 0;
}