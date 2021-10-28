#include<stdio.h>
int main(){
    int i=1,x,FACTORIAL=1;
    printf("input number: ");
    scanf("%d",&x);
    if(x<=0)
    printf("error\a");
    else{
    for(i=1;i<=x;i++)
    FACTORIAL=FACTORIAL*i;
    printf("%d",FACTORIAL);}
    return 0;
}
/*求阶乘改进版*/