#include<stdio.h>
long fib (int n)
{if(n==0||n==1)return 1;
  else return fib(n-1)+fib(n-2);
}
int main()
{
int n;
printf("input n");
scanf("%d",&n);

printf("%d",fib(n));

return 0;}