#include<stdio.h>
int main()
{
int marks;
printf("enter your marks \n");
scanf("%d",&marks);
if (marks>90)
{
    printf("grade A");
}
else if(marks>=80)
{
    printf("grade B");
}
else if(marks>=75)
{
    printf("grade C");
}
else
{
    printf("grade F");
    }
}