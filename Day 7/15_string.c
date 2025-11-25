#include<stdio.h>
int main()
{
    char user_input[100];
    printf("enter a string");
    fgets(user_input,100,stdin);
    printf("enteres string is:%s",user_input);
    printf("size of string:%s\n",user_input[100]);
}