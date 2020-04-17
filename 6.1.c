#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,j;
    int set[100];
    for(i=0;i<100;i++)
    {
        set[i]=i+2;
        for(j=2;j<set[i];j++)
        {
            if (set[i]%j==0)
            {
                set[i]=0;
            }
        }
        if (set[i]!=0&&set[i]<100)
        {
            printf("%d\t",set[i]);
        }
        
    }
    system("pause");
    return 0;
}