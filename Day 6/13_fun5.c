#include<stdio.h>
void fact(int sum);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    fact(n);
    fact(n);
    fact(n);

} 
void fact(int num)
{
    int res;
    while(num>=1)
    {
        res=res*num;
        num--;
    }
    printf("%d",res);
}