#include<stdio.h>
void add();
sub();
int main()
{
    printf("main function \n");
    add();
    int res=sub();
    printf("sub is:%d",res);
} 
void add(){
    printf("adition is:%d \n",(10+10));
}
int sub(){
return 30-20;
}