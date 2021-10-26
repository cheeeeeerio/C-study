#include<stdio.h>
int main(){
    float average,sum=0;
    int x,i=0,a;
    printf("input the number of samples:");
    scanf("%d",&a);
    do
    {printf("input samples:");
    scanf("%d",&x);
    sum=sum+x;
    i=i+1;}
     while (i<a);
    average=sum/a;
    printf("average=%7.2f\n",average);
}
/*求多个数的平均数*/