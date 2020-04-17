#include<stdio.h>
#include<stdlib.h>
void fortype(int,char []);
int main(void)
{
    printf("please type in a 4-bit number:\n");
    char bitnum[30]={'\0'};
    int numb;
    scanf("%d",&numb);
    fortype(numb,bitnum);
    system("pause");
    return 0;
}
void fortype(int numb,char bitnum[])
{
    int i;
    for ( i = 3; i >= 0 ; i--)
    {
        bitnum[2*i]=numb%10+'0';
        bitnum[2*i-1]=' ';
        numb/=10;
    }
    printf("%s",bitnum);
}