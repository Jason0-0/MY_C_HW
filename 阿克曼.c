#include<stdio.h>
int math(int a,int b)
{
	if (a==1 && b==0)
        return 2;
		else if (a==0 && b>=0)
        return 1;
	else if (a>=2 && b==0)
        return a+2;
	else if  (a>=1 && b>=1)
	return math(math(a-1,b),b-1);
}
int main()
	{

    int a,b;
    printf ("a\n");
	scanf ("%d",&a);
	getchar();
	printf ("b\n");
	scanf ("%d",&b);
	printf ("%d\n",math(a,b));
	return main();
	}


