#include<stdio.h>
int main()
{
    int a=20;
    int *ptr=&a;
    printf("perint value of a:%d \n",a);
    printf("value of ptr of a:%p \n",*ptr,*(&a),*(*(&ptr)),*(&(*(&a))));
    printf("value of p:%p \n",*ptr);
    printf("value of a of ptr:%p \n",*(&ptr),&a,&(*((&a))));
}