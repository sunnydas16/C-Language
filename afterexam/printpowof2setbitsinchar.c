#include<stdio.h>
int main(){

    char s[] = "abcdefg";

    int i,count,pos;

    for(i=0;s[i];i++){
        count = 0;
        for(pos=7;pos>=0;pos--){
            if((s[i]>>pos&1)==1)
            count++;
        }
        if((count&count-1)==0)
        printf("%c ", s[i]);
    }


    return 0;
}