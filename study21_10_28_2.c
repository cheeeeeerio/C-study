#include<stdio.h>
int main(){
    char a,b;
    printf("input letter:");
    a=getchar();
    if(a>='a'&&a<='z')
    b=a-32;
    else if(a>='A'&&a<='Z')
    b=a+32;
    printf("%c\n",b);
    return 0;

}
 /*字母大小写的相互转换*/