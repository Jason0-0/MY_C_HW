#include<stdio.h>
int main()
{
	printf("Fahrenheit------Centigrade\n");
	float c;
	int f;
	for(f=0;f<=300;f=f+10)
	{
		c=5.0/9*(f-32);
		printf("%-16d%f\n",f,c);
	}
	return 0;
}

