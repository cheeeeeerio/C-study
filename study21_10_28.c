#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,D;
    printf("input two points:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    D=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("d=%.2f",D);
}
/*求点（a,b）（c,d）之间的距离*/