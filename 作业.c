/*2.2*/
#include<studio.h>
int main()
{
	printf("These values are: \n");
	float x,y,z;
	x=y=z=2.5;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	return 0;
}
/*3.2*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	ptintf("please input: \n");
	scanf("%d",&a);
	while((fabs(a)/1000)>=1)
	{
		printf("please input again\n");
		scanf("%d",&a);
	}
	a=fabs(a);
	b=a/100;
	c=(a-100*b)/10;
	d=a%10;
	printf("its reversed number is %d\n",100*d+10*c+b);
	return 0;
}

/*3.3*/
#include<stdio.h>
#include<math.h>
int main()
{
	const float rate=0.0225;
	unsigned int n,capital;
	float deposit;
	printf("capital=");
	scanf("%d",&capital);
	printf("n=");
	scanf("%d",&n);
	deposit=capital*pow(1+rate,n);
	printf("the deposit is %f",deposit);
	return 0;
	
}
/*3.4*/
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
	return 0;
}

/*5.4*/

#include <stdio.h>
#include<math.h>
int main()
{
	const double rate1=0.0225;
	const double rate2=0.0243;
	const double rate3=0.0270;
	const double rate5=0.0288;
	const double rate8=0.0300;
	int capital,year;
	double deposit;
	printf("The capital is: ");
	scanf("%d",&capital);
	putchar('\n');
	printf("Year:");
	scanf("%d",&year);
	putchar('\n');
	switch(year)
	{
		case 1: deposit=capital*pow(1+rate1,year);
			break;
		case 2: deposit=capital*pow(1+rate2,year);
			break;
		case 3: deposit=capital*pow(1+rate3,year);
			break;
		case 5: deposit=capital*pow(1+rate5,year);
			break;
		case 8: deposit=capital*pow(1+rate8,year);
			break;
		default: printf("invalid year! please input again!");
				return main();		
	}
	printf("The deposit is:%lf",deposit);
	return 0;
}

/*5.5*/

#include<stdio.h>
int main()
{
	int year,flag;
	printf("Enter year:");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
		flag=1;
	else
		flag=0;
	if (flag==1)
		printf("%d is a leap year!\n",year);
	else 
		printf("%d is not a leap year!\n",year);
	return 0;
}

/*5.9*/

#include<stdio.h>
int main()
{
	int score,mark;
	printf("Input score: ");
	scanf("%d",&score);
	mark=score<0||score>100?-1:score/10;	
	if(mark>=9)
		printf("%d--A",score);
	else if(mark>=8)
		printf("%d--B",score);
	else if(mark>=7)
		printf("%d--C",score);
	else if(mark>=6)
		printf("%d--D",score);
	else if(mark>=0)
		printf("%d--E",score);
	else
		printf("Invalid score!");
	return 0;
}


/*6.2(1)*/

#include<stdio.h>
int main()
{
	int i, sum=0;
	for(i=1;i<=101;i++)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	return main();
}

/*6.2(2)*/

#include<stdio.h>
int main()
{
	long i;
	long term,sum=0;
	for(i=1;i<101;i=i+2)
	{
		term=i*(i+1)*(i+2);
		sum=sum+term;
	}

printf("sum=%ld",sum);
return 0;
}

/*6.2(3)*/
#include<stdio.h>
int main()
{
	long term=0,sum=0;
	int a,i,n;
	printf("Input a,n:");
	scanf("%d,%d",&a,&n);
	for  (i=1;i<=n;i++)
	{
		term=10*term+a;
		sum=sum+term;
		
	}
	printf("sum=%ld\n",sum);
	return 0;
}

/*6.2(4)*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n=1;
	float term=1.0,sign=1,sum=0;
	while(fabs(term)>pow(10,-4))
	{
		term=sign/n;
		sum=sum+term;
		sign=-sign;
		n++;
	}
	printf("sum=%f\n",sum);
	return 0;
}
/*6.2(5)*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n=1,count=1;
	float x;
	double sum,term;
	printf("Input x:");
	scanf("%f",&x);
	sum=x;
	term=x;
	do{
		term=-1*term*pow(x,2)/((n+1)*(n+2));
		sum=sum+term;
		n=n+2;
		count++;
	}while(fabs(term)>pow(10,-5));
	printf("sin(x)=%f,count=%d\n",sum,count);
	return 0;
}
/*6.3*/
#include<stdio.h>
int main()
{
    int x=1,find=0;
    while(!find)
    {
        if (x%2==1&&x%3==2&&x%5==4&&x%6==5&&x%7==0)
        {
            printf("x=%d\n",x);
            find=1;
        }
       else x++;
    }
    return 0;
}

/*6.5*/
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

/*6.18*/
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

/*6.20*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,num;
	double term;
	for (a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			num=1100*a+11*b;
			term=sqrt(num);
			if ((int)term==term&&a!=b)
			{
				printf("The number is %d",num);
				goto End;
			}
			//else continue;  <---- Not having This phrase is OK
		}
	}
	End:return 0;
}

/*7.2*/

#include<stdio.h>
#include<Windows.h>
int hour,minute,second;
void Update()                 // refresh time
{
    second++;
    if(second==60)
    {
        second=0;
        minute++;
    }
    if(minute==60)
    {
        minute=0;
        hour++;
    }
    if(hour==24)
    {
        hour=0;
    }
}
void Display()                  //display time
{
    printf("%02d:%02d:%02d\n",hour,minute,second);
}
void Delay()                     //delay 1s
{
    /*int t;
    for(t=0;t<100000000;t++);*/  //if you use this phrase ,time will go faster because of some secret magic call MoFa...tought it is from the textbook
        Sleep(1000);
}
int main()
{
    int i;
    /*scanf("%d:%d:%d",&hour,&minute,&second);*/
	second=minute=hour=0;
    for(i=0;i<1000000;i++)
    {
        Update();
        Display();
        Delay();
    }
    return 0;
}
		