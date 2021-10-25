#include<stdio.h>
int main(){
    int a,b,c,MAX;
    printf("input number:a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)
    MAX=b;
    else
    MAX=a;
    if(MAX<c)
    MAX=c;
    printf("MAX=%d\n",MAX);
    system("pause");
    return 0;
    }