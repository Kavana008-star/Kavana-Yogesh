#include<stdio.h>
struct student
{
  char name[30];
  int rollnum;
  int marks;
};
int main()
{
    struct student st1;
    printf("enter student name:\n");
    scanf("%s",st1.name);
    printf("enter student rollnum:\n");
    scanf("%d",&st1.rollnum);
    printf("enter student marks:\n");
    scanf("%d",&st1.marks);
    
    printf("student details:\n");
    printf("name:%s \n",st1.name);
    printf("roll num:%d \n",st1.rollnum);
    printf("marks:%d \n",st1.marks);
}