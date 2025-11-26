#include<stdio.h>
int main()
{
    int a=10;
    int *ptr1=&a;
    int b=20;
    int *ptr2=&b;

    int c;
    printf("before swap:%d,%d \n",a,b);
    c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
    printf("after swap:%d,%d\n",a,b);


}