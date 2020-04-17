#include<stdio.h>
#include<stdlib.h>
int main(void){
    char str[3][80];
    int upper=0,lower=0,numb=0,space=0,other=0;
    for(int i=0;i<3;i++){
        gets(str[i]);
        for(int j=0;j<80&&str[i][j]!='\0';j++)
        {
            if (str[i][j]>='A'&&str[i][j]<='Z')
            {
                ++upper;
            }
            else if (str[i][j]>='a'&&str[i][j]<='z')
            {
                ++lower;
            }
            else if (str[i][j]==' ')
            {
                ++space;
            }
            else if (str[i][j]>='0'&&str[i][j]<='9')
            {
                ++numb;
            }
            else
                ++other;
        }
    }
    printf("%d %d %d %d %d",upper,lower,numb,space,other);
    system("pause");
    return 0;
}