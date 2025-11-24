#include<stdio.h>
int add(int num1, int num2);
int main()
{
int res1=add(4,5);
int res2=add(10,20);
int res3=add(30,40);
int res4=add(50,90);
printf("res1:%d \n",res1);
printf("res2:%d \n",res2);
printf("res3:%d \n",res3);
printf("res4:%d \n",res4);
int sub(int num1,int num2);

  int res5=sub(40,5);
int res6=sub(10,2);
int res7=sub(30,4);
int res8=sub(5,90);
printf("res5:%d \n",res5);
printf("res6:%d \n",res6);
printf("res7:%d \n",res7);
printf("res8:%d \n",res8);  
}
int add(int num1,int num2)
{
    return num1+num2;
}
int sub(int num1,int num2)
 {   return num1-num2;
 }
