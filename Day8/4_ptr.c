#include<stdio.h>
int main()
{
    int a=20;
    int *ptr=&a;
    printf("value of a:%d \n",a);
   *ptr=50;
    printf("changed value of a:%d\n",*ptr);
    (*ptr)++;
    printf("changed value of a:%d\n",*ptr);

}