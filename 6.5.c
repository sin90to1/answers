#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a[5];
    int temp;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<5/2;i++){
        temp = a[4-i];
        a[4-i]=a[i];
        a[i] = temp;
    }
    for(int i = 0; i<5; i++ ){
        printf("%4d",a[i]);
    }
    system("pause");
    return 0;
}