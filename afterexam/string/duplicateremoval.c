#include<stdio.h>

int main(){

    char s[20];

    printf("Etr the str ");
    scanf("%s", s);

    int i,j;
    for(i=0;s[i];i++){
        for(j=i+1;s[j];j++){
            if(s[i]==s[j]){
                s[j]=s[j+1];
            }
        }
    }

    printf("%s", s);
    
    return 0;
}
