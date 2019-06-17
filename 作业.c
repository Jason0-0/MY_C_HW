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
	return 0;
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
	
/*7.4*/
#include<stdio.h>
int Lcm(int v1,int v2);
int main()
{
	int a,b;
	printf("Please input two integers:");
	scanf("%d%d",&a,&b);
	if(a<=0||b<=0)				// check the value 
	{
		printf("Invalid value!\n");
		return main();
	}	
	printf("The LCM of %d and %d is %d.\n",a,b,Lcm(a,b));
	return 0;
}	
int Lcm(int v1,int v2)
{
	  int max,min,ret,find=0,count=1;
/* calculate the max and the min of a and b, set them to max,min*/
	  if(v1>v2)
	  {
	  	max=v1,min=v2;
	  }
	  else{
	  	max=v2,min=v1;
	  }
/* calculate the lcm via exhaustion*/
	  while(!find)		
	  {
	  	ret=count*max;
		if(ret%min==0)
		{
			find=1;		
		}
		count++;
	  }
	  return ret;
}
/*7.7*/

#include<stdio.h>
int Gcd(int v1,int v2);
int main()
{
	int a,b;
	printf("Please input two integers:");
	scanf("%d%d",&a,&b);
	
	if(a<=0||b<=0)					//check the value input
	{
		printf("Invalid value!");
		return main();
	}
	
	printf("The GCD of %d and %d is %d.\n",a,b,Gcd(a,b));
	return 0;
}

int Gcd_exh(int v1,int v2)
{
	int max,min,ret,find=0;

	/* calculate the max and the min of a and b, set them to max,min*/
	
	if(v1>v2)
	{
		max=v1,min=v2;
	}
	else{
	  	max=v2,min=v1;
	}
	
/* calculate the gcd via exhaustion*/

	ret=min;
	while(!find)		
	{

		if(min%ret==0&&max%ret==0)
		{
			find=1;	
			continue;	
		}
		ret--;
	}
	return ret;
}

/*calculate the gcd via Euclidean algorithm*/

int Gcd_euc(int v1,int v2)
{
	int max,min,r=1;
	
	if(v1>v2)
	{
		max=v1,min=v2;
	}
	else{
	  	max=v2,min=v1;
	}
	
	do{
		r=max%min;
		max=min;
		min=r;
	}while(r!=0);
	return max; 				//when r=0,the "b" of gcd(a,b) is the gcd of two
	
}

/*calculate the gcd via Recursion*/

int Gcd_rec(int v1,int v2)
{
	if(a==b)
		return a;		//base line
	else if (a>b)
		return Gcd_rec(a-b,b);
	else if (a<b)
		return Gcd_rec(a,b-a);
}

/*7.12*/
#include<stdio.h>
void Hanoi(int n,char a,char b,char c);
void Move(int n,char a,char b);
int main()
{
    int n;
    printf("Input the number of disks:");
    scanf("%d",&n);
    printf("Steps of moving %d disks from A to B by means of C:\n",n);
    Hanoi(n,'A','B','C');
    return 0;
}

void Hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        Move(n,a,b);
    }
    else
    {
        Hanoi(n-1,a,c,b);
        Move(n,a,b);
        Hanoi(n-1,c,b,a);// the leave out(n-1disks) just need to be moved from the first value to the second
    }
}

void Move(int n,char a,char b)
{
    printf("Move disk(%d) : from %c to %c\n",n,a,b);
}

/*8.10*/

#include<stdio.h>
#include<math.h>
#define max 10


long int MatrixDiagonal(int matrix[][max], int n);
int MatrixInput(int matrix[][max], int n);
int main()
{
	int matrix[max][max] = { {0},{0} };
	int n = 0;
	int err = 0;
	long int result = 0;
	while (1)
	{
		printf("Please input the order of the matrix:");
		scanf_s("%d", &n);
		if (n > max)
		{
			printf("Beyond the scope!\n");
			continue;
		}
		break;
	}

	do
	{
		err = MatrixInput(matrix, n);
		if (err != 0)
		{
			printf("Invalid! error(%d)\n \n", err);
		}
	} while (err);

	result = MatrixDiagonal(matrix, n);

	printf("Result is: %ld", result);
	return 0;
}

int MatrixInput(int matrix[][max], int n)
{
	char c = NULL;
	int* pM = NULL;
	int* pTemp = NULL;
	int ans = 0;
	int j = 0;
	while (getchar() != '\n');
	printf("Please input:\n\n");
	//int flag=0;

	for (int i = 0; i < n; i++)//row input control
	{
		pM =matrix[i]; //row
		pTemp = pM;
		while (j < n)	//sign of col
		{
			c = getchar();

			if (c >= '0' && c <= '9')
			{
				ans = 10 * ans + (c - '0');
			}
			else if (c == 9)  //tab, write the num to array and switch to the next element
			{
				if (j < n)
				{
					*pM = ans;
					pM = pM++;
					//*pTemp = ans;
					//pTemp = pM+j;
					j++;
					ans = 0;
					continue;
				}
				else return -1;
			}
			else if (c == '\n')		//switch to next row
			{
				if (j == n-1)
				{
					*pM = ans;
					ans = 0;
					j = 0;
					putchar('\n');
					break;
				}
				return -2;
			}
			else
			{
				//printf("Invalid! ");
				return -3;
			}
		}

	}
	return 0;
}

long int MatrixDiagonal(int matrix[][max], int n)
{
	int sum = 0;
	int i, j;
	for (i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}
	for (j = 0; j < n; j++)
	{
		sum += matrix[j][n-1 - j];
	}
	return sum;
}



/*8.12*/
#include<stdio.h>
#include<stdlib.h>
#define Max 20

int main()
{
	int YangTri[Max][Max]={{0},{0}};
	int n;
	printf("Please input the order of the Tri: ");
	scanf("%d",&n);

	//setting the basic values of the Tri
	for(int i=0;i<n;i++)
	{
		YangTri[i][0]=1;
		YangTri[i][i]=1;
	}

	for(int j=2;j<n;j++)		//row
	{
		for(int k=1;k<n;k++)
		{
			YangTri[j][k]=YangTri[j-1][k]+YangTri[j-1][k-1];
		}
	}

	//print the Tri
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(YangTri[i][j]==0)
			{
				printf("     ");
			}
			else
			{
				printf("%-4d ",YangTri[i][j]);
			}
		}
		putchar('\n');
		putchar('\n');
	}
	return 0;
}

/*8.16*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int BinSearch(int a[], int val);

int main()
{
	srand(time(NULL));
	int a[N] = { rand()%10 };
	int num = 0;
	int pos = 0;
	for (int i = 1; i < N; i++)
	{
		a[i] = a[i-1]+rand()%10;
	}

	printf("The array is:\n");
	for (int j = 0; j < N; j++)
	{
		printf("%d\n", a[j]);
	}

	printf("\nPlease input:");
	scanf("%d", &num);
	pos = BinSearch(a, num);
	if (pos >= 0)
	{
		printf("The position of %d is %d", num, pos);
	}
	else
	{
		printf("error!");
	}
	return 0;
}

int BinSearch(int a[], int val)
{
	int low = 0, high = N-1 , mid;
	if (val < a[low])
		return 1;
	else if (val > a[high])
		return N + 1;
	while ((high - low) > 2)
	{
		mid = (high + low) / 2;
		if (val > a[mid+1])
		{
			low = mid + 1;
		}
		else if (val < a[mid-1])
		{
			high = mid -1;
		}
		else        //a[mid-1]>=val<=a[mid+1]
		{
			if (val > a[mid])
				return mid + 2;
			else
				return mid+1;
			break;
		}
	}
	mid = low + 1;
	if (val > a[mid])
		return mid + 2;
	else
		return mid+1;
	
}


/*9.4*/

//(1)
#include<stdio.h>
#include<stdlib.h>

int DayofYear(int year, int month, int day)
{
	int DayofMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int d=0;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		DayofMonth[1]++;
	}

	for (int i = 0; i < month - 1; i++)
	{
		d += DayofMonth[i];
	}
	d += day;
	return d;
}

//(2)
void MonthDay(int year, int yearDay, int* pMonth, int* pDay)
{
	int i = 0;
	int DayofMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		DayofMonth[1]++;
	}
	while (yearDay > DayofMonth[i])
	{
		yearDay -= DayofMonth[i];
		i++;

	}
	i++;
	*pMonth = i;
	*pDay = yearDay;


}

//(3)
int main()
{
	while (1)
	{
		char s = NULL;
		printf("1.year/month/day->yearDay\n");
		printf("2.yearDay->year/month/day\n");
		printf("3.Exit\n\n");
		printf("Please enter your choice:");

		s = getchar();
		while (getchar() != '\n');

		int yearDay, year, month, day;
		int* pMonth = &month;
		int* pDay = &day;

		switch (s)
		{
		case '1':
			printf("Please input year/month/day\n");
			scanf_s("%d/%d/%d", &year, &month, &day);
			yearDay = DayofYear(year, month, day);
			printf("It is  NO.%d day of year %d\n", yearDay, year);
			break;
		case '2':
			printf("Please input the year and the day\n");
			scanf_s("%d,%d", &year, &yearDay);
			MonthDay(year, yearDay, pMonth, pDay);
			printf("This day is %d/%d/%d\n", year, *pMonth, *pDay);
			break;
		case '3':
			exit(0);
		}
		putchar('\n');
		while (getchar() != '\n');
	}
	return 0;
}

/*8.18*/ 1!~40!

#include<stdio.h>
#include<stdlib.h>

#define N 40
#define MAX 50

int main()
{
	int num[MAX] = { 0 };
	num[MAX - 1] = 1;


	int i, j, k = MAX - 1;
	int n;

	for (i = 1; i <= N; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			num[j] = num[j] * i;
		}

		//Carry
		k = MAX - 1;
		while (k >= 0)
		{
			if (num[k] > 9)
			{
				num[k - 1] += num[k] / 10;
				num[k] = num[k] % 10;
			}
			k = k - 1;
		}

		//print the result
		int BeginPrint = 0;
		printf("\n%d! = ", i);
		for (n = 0; n < MAX; n++)
		{

			if (num[n] != 0)
			{
				BeginPrint = 1;
			}
			if (BeginPrint == 1)
			{
				printf("%d", num[n]);
			}
		}
	}
	return 0;
}

/*12.1*/

typedef struct date
	{
		int Year;
		int month;
		int day;
	}DATE;
	
typedef	struct job
{
	char School[50];
	char Level[20];
	char Position[20];
}JOB;

typedef struct Form
{
	char Name[40]={NULL};
	char Sex=NULL;
	DATE birthday;
	JOB Job;
}FORM

/*11.5*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
#define M 10

void Transpose(int a[][N],int at[][M],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			at[j][i]=a[i][j];
		}
	}
}
void Transpose(int (*a)[N],int (*at)[M],int m,int n);
{
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			*(at[i]+j)=*(a[j]+i);
		}
}
void Transpose(int *a,int *at,int m,int n);
{
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			*(*(at+i)+j)=*(*(a+j)+i);
		}
}

int main()
{
	int a[M][N]={{0},{0}};
	int at[N][M]={{0},{0}};
	int n=0;
	int m,n;
	int i,j;
	printf("");
	scanf("%d,%d",&m,&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	void Transpose(a,at, m, n);
	
	for(i=0;i<n;i++ )
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",at[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
/*11.6*/
#include<stdio.h>
#include<stdlib.h>

#define N 10
#define M 10

void InputArray(int *p,int m,int n);
int FindMax(int *p,int m,int n,int*pRow,int *pCol);

int main()
{
	int Row,Col;
	int m,n;
	int a[M][N]={{0},{0}};
	printf("Please input the height and length of the matrix");
	scanf("%d,%d".&m,&n);
	
	InputArray(a,m,n);
	
	int max=FindMax(a,m,n,&Row,&Col);
	printf("The maximum is %d, from (%d,%d)",max,Row,Col);
	return 0;
}

void InputArray(int *p,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&p[i*n+j]);    
		}
	}
}

int FindMax(int *p,int m,int n,int *pRow,int *pCol)
{
	int max=*p;
	*Row=1;
	*pCol=1;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i*n+j]>max)
			{
				max=p[i*n+j];
				*pRow=i+1;
				*pCol=j+1;
			}
		}
	}	
	return max;
}

/*11.7*/

#include<stdio.h>
#include<stdlib.h>

void InputArray(int *p,int m,int n);
int FindMax(int *p,int m,int n,int*pClass,int *pStu);
int main()
{
	int Stu,Class;
	int SizeStu,SizeClass;
	printf("");
	scanf("%d,%d",&SizeClass,&SizeStu);
	int *pArray=(int*)calloc(SizeClass*SizeStu,sizeof(int));
	
	InputArray(pArray,SizeClass,SizeStu);
	
	//print max
	int max=FindMax(pArray,SizeClass,SizeStu,&Class,&Stu);
	
	printf("The student with highest mark is the NO.%d of class %d. His(Her) mark is %d",Stu,Class,max);
	free(pArray);
	return 0;
}

void InputArray(int *p,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		printf("Class %d:\t",i+1);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&p[i*n+j]);    //p[i*n+j] refers to a value, not an address
			//printf("\b\r");
		}
	}
}

int FindMax(int *p,int m,int n,int *pClass,int *pStu)
{
	int max=*p;
	*pClass=1;
	*pStu=1;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i*n+j]>max)
			{
				max=p[i*n+j];
				*pClass=i+1;
				*pStu=j+1;
			}
		}
	}	
	return max;
}

/*10.5*/

//call by value
#include<stdio.h>
#define N 100

void DelChar(char srcStr[],char dstStr[],char ch);
int main()
{
	char Str[N],Ret[N];
	char Ch;
	printf("Please input :");
	gets(Str);
	printf("Please input the character you want to delect: ");
	Ch=getchar();
	
	DelChar(Str,Ret,Ch);
	
	printf("Result: %s",Ret);
	return 0;
}

void DelChar(char srcStr[],char dstStr[],char ch)
{
	int i=0,j=0;
	while(srcStr[i]!='\0')
	{
		if(srcStr[i]!=ch)
		{
			dstStr[j]=srcStr[i];
			j++;
		}
	}
	dstStr[j]='\0';
}

//call by pointer
void DelChar(char *pSrcStr,char *pDstStr,char ch);
int main()
{
	char Str[N],Ret[N];
	char Ch;
	printf("Please input :");
	gets(Str);
	printf("Please input the character you want to delect: ");
	Ch=getchar();
	
	DelChar(Str,Ret,Ch);
	
	printf("Result: %s",Ret);
	return 0;
}

void DelChar(char *pSrcStr,char *pDstStr,char ch)
{
	while(*pSrcStr!='\0')
	{
		if(*pSrcStr!=ch)
		{
			*pDstStr=*pSrcStr[i];
			pDstStr++;
		}
		pSrcStr++;
	}
	*pDstStr='\0';
}

/*10.7*/
void ReverseStr(char srcStr[],char dstStr[]);
int main()
{
	char Str[N],Ret[N];
	printf("Please input :");
	gets(Str);
	
	ReverseStr(Str,Ret);
	
	printf("Result: %s",Ret);
	return 0;
}

void ReverseStr(char srcStr[],char dstStr[])
{
	int i=0,j=0;
	while(srcStr[i]!='\0')
	{
		i++;
	}
	while(i>0)
	{
		i--;
		dstStr[j]=srcStr[i];
		j++;
	}
	dstStr[j]='\0';
}

//call by pointer
void ReverseStr(char *pSrcStr,char *pDstStr);
int main()
{
	char Str[N],Ret[N];
	printf("Please input :");
	gets(Str);
	
	ReverseStr(Str,Ret);
	
	printf("Result: %s",Ret);
	return 0;
}

void ReverseStr(char *pSrcStr,char *pDstStr)
{
	int i=0,j=0;
	while(*(pSrcStr+i)!='\0')
	{
		i++;	
	}
	while(i>0)
	{
		i--;
		*pDstStr=*(pSrcStr+i);
		pDstStr++;
	}
	*pDstStr='\0';
}