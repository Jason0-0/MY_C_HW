#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,dirta;
	printf("please input.\n");
	printf("a=  ");
	scanf("%lf",&a);
	printf("b=  ");
	scanf("%lf",&b);
	printf("c=  ");
	scanf("%lf",&c);
	dirta=b*b-4*a*c;
	if (dirta<0)
		{
			printf("this equation has no real roots\n");
		}
		else if(dirta==0)
		{
			double x;
			x=-b/(2*a);
			printf("the equal roots of this equation are x1=x2=%lf\n ",x);
		}
		else if(dirta>0)
		{
			double x1,x2;
			x1=(-b+sqrt(b*b-4*a*c)/2*a);
			x2=(-b-sqrt(b*b-4*a*c)/2*a);
			printf("the real roots of this equation are x1=%lf,x2=%lf",x1,x2);
		}
	return main();
}
