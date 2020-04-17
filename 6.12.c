#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char text[50],code[50];
    gets(text);
    puts(text);
    for(int j=0;text[j]!='\0';j++){
        if (text[j]>='A'&&text[j]<='Z')
        {
            code[j]=155-text[j];
        }
        else if (text[j]>='a'&&text[j]<='z')
        {
            code[j]=219-text[j];
        }
        else
            code[j]=text[j];
    }
    for(int j=0;j<strlen(code);j++){
        putchar(code[j]);
    }
    system("pause");
    return 0;
}