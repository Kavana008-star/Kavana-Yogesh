#include<stdio.h>
int main()
{
int arr[5],min=0;
printf("enter a numbers:");
for(int i=0;i<=5-1;i++)
{
      scanf("%d",&arr[i]);
       
}
min=arr[0];
for(int i=0;i<=5-1;i++)
{ 
if(arr[i]<min)
{
   min=arr[i];
}
}
printf("min:%d",min);
}