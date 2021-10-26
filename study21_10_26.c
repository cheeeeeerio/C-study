#include<stdio.h>
int main(){
    int i,n,FACTORIAL=1;
    printf("input number\n");
    scanf("%d",&n);
    if(n<1)
    printf("error\n");
    else
   {while(n>1){
        FACTORIAL=FACTORIAL*n;
        n=n-1;
    }
    printf("FACTORUAL=%d\n",FACTORIAL);
    }
    return 0;

    }
    /*求一个数的阶乘*/
