#include<stdlib.h>
#include<stdio.h>
void cpy(char str[],char vowl[]);
int main(void)
{
    char str[30]={'\0'},vowl[30]={'\0'};
    printf("please type in some letters:\n");
    gets(str);
    cpy(str,vowl);
    printf("here are the vowel letters:\n%s",vowl);
    putchar('\n');
    system("pause");
    return 0;
}

void cpy(char str[],char vowl[])
{
    for (int i = 0,j=0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'i' || str[i] == 'I' || str[i] == 'u' 
        || str[i] == 'U' || str[i] == 'e' || str[i]=='E' || str[i] == 'o' || str[i] == 'O')
        {
            vowl[j] = str[i];
            j++;
        }
    }
}