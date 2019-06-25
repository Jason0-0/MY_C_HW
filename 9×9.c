#include<stdio.h>
int main()
{
	for(int i=1;i<=9;i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	for(int i=1;i<=9;i++)
	{
		printf("-\t");
	}
    printf("\n");
/*-----------------No.1--------------------*/
	for(int j=1;j<=9;j++)
	{
		for(int k=1;k<=9;k++)
		{
			printf("%d\t",j*k);
		}
		printf("\n");
	}
/*-----------------No.2---------------------*/
	for(int j=1;j<=9;j++)
	{
		for(int k=1;k<=j;k++)
		{
			printf("%d\t",j*k);
		}
        printf("\n");
	}
/*-----------------No.3----------------------*/
	for(int j=1;j<=9;j++)
	{
		for(int k=1;k<=9;k++)
		{	if(k<j)
			{
				printf(" \t");
			}
			else printf("%d\t",j*k);
		}
        printf("\n");
	}
	return 0;
}
