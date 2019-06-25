#include<stdio.h>
int math(int a,int b)
{
 int c=1;
 for(int i=0; i<b;i++)
 {c=a*c;
 }
 return c;

  }
  int main()

  {int a;
  int b;
printf("输入底数\n");
 scanf("%d",&a);
 printf("输入指数");
 scanf("%d",&b);
 printf("the result is%d\n", math(a,b));
 return 0;}
