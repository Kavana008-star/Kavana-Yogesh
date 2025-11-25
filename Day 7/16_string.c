#include<stdio.h>
#include<strings.h>
int main()
{
char first_name[]="kavana";
char last_name[]="yogesh";
char another_name[]="kavana";
printf("length of first_name:%d \n",strlen(first_name));
printf("full name:%s \n",strcat(first_name,last_name));
printf("%d \n",strcmp(first_name,another_name));
if(strcmp(first_name,another_name)==0)
{
printf("both strings are equal \n");
}
else{
    printf("both strings are not equal \n");
}
printf("first_name:%s\n last_name:%s\n another_name:%s\n",first_name,last_name,another_name);
}