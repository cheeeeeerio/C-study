#include<stdio.h>
#define pi 3.1415926
int main(){
    float r,S,V;
    printf("input r:");
    scanf("%f",&r);
    S=pi*r*r;
    V=4*pi*r*r*r/3;
    printf("S=%f,V=%f\n",S,V);
    system("pause");
    return 0;
}