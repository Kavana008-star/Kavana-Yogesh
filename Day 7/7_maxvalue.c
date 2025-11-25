#include<stdio.h>
int main()
{
int arr[5],max=0;
printf("enter a numbers:");
for(int i=0;i<=5-1;i++)
{
      scanf("%d",&arr[i]);
       
}
max=arr[0];
for(int i=0;i<=5-1;i++)
{ 
if(arr[i]>max)
{
   max=arr[i];
}
}
printf("max:%d",max);
}