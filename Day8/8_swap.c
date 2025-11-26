#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c;
    printf("before swap:%d,%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swap:%d,%d",a,b);


}