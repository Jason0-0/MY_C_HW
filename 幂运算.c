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
printf("�������\n");
 scanf("%d",&a);
 printf("����ָ��");
 scanf("%d",&b);
 printf("the result is%d\n", math(a,b));
 return 0;}
