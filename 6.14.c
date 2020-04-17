#include<stdio.h>
#include<stdlib.h>

int main(void){
    int out;
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    for(int i=0;str2[i]!='\0'&&str1[i]!='\0';i++){
        if (str1[i]==str2[i])
        {
            out=out;
        }
        else
        { 
            out = (str1[i]-str2[i]);
        }
    }
    printf("%d",out);
    system("pause");
    return 0;
}