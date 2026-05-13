#include<stdio.h>
int del_count_fun(char *);
int main(){

    int count;
    char s[100];
    printf("Enter the String ");
    scanf("%s", s);

    count = del_count_fun(s);
    printf("%s Count is %d \n",s, count);

    

}
int del_count_fun(char *s){

    
    int i,k,count=0;
    for(i=0;s[i];i++){
        if(s[i]>='0'&&s[i]<='9'){
            count++;
            for(k=i;s[k];k++){
                s[k]=s[k+1];
            }
            i--;
        }
    }
    return count;
}