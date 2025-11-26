#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int roll_num;
    int marks;
}st1,st2;
int main()
{
    strcpy(st1.name,"kavana");
    st1.marks=17;
    st1.roll_num=05;
    printf("student details:\n");
    printf("name:%s\n",st1.name);
    printf("roll num:%d\n",st1.roll_num);
    printf("marks:%d\n",st1.marks);

    strcpy(st2.name,"Me");
    st2.marks=28;
    st2.roll_num=15;
    printf("student details:\n");
    printf("name:%s\n",st2.name);
    printf("rollnum:%d\n",st2.roll_num);
    printf("marks:%d\n",st2.marks);
}