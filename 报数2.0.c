#include<stdio.h>
#include<stdlib.h>
#include<time.h>

static char sign;
int Play(int* pCounter, int (*p1)(int* pCounter), int (*P2)(int* pCounter));
int ComCount(int* pCounter);
int UserCount(int* pCounter);
int Input(int Val);

int main()
{
	srand(time(NULL));

	int iCounter = 0;
	char f = NULL;
	int flag = rand() % 2;
	if (flag == 1)
	{
		f = Play(&iCounter, ComCount, UserCount);
	}
	else
	{
		f = Play(&iCounter, UserCount, ComCount);
	}
	if (f == 'C')
	{
		printf("\nComputer win!\n");
	}
	else
	{
		printf("\nYou win!\n");
	}
	return 0;
}

int Play(int* pCounter, int (*P1)(int(*pCounter)), int (*P2)(int(*pCounter)))
{



	while (1)
	{
		P1(pCounter);

		if (*pCounter >= 30)
			return sign;

		P2(pCounter);

		if (*pCounter >= 30)
			return sign;
	}
}

int UserCount(int* pCounter)
{
	sign = 'U';
	int num = 0;
	int f = 0;

	do
	{
		//初始化标识值
		f = 0;
		num = Input(*pCounter);

		switch (num)
		{
		case 1:
			*pCounter = *pCounter + 1;

			break;
		case 2:
			*pCounter = *pCounter + 2;

			break;
		default:
			printf("Invalid! Error(%d)\n", num);
			num = 0;
			f = 1;
			break;
		}
	} while (f);

	return 0;
}

int ComCount(int* pCounter)
{
	sign = 'C';
	int C_Flag = 0;
	int term;
	C_Flag = 30 - *pCounter;
	term = C_Flag % 3;

	if (term == 1)
	{
		*pCounter = *pCounter + 1;
	}
	else if (term == 2)
	{
		*pCounter = *pCounter + 2;
	}
	else
	{
		term = rand() % 2 + 1;
		(*pCounter) = (*pCounter) + term;
	}
	if (term == 1)
	{
		printf("Com:%3d\n", *pCounter);
	}
	else
	{
		printf("Com:%3d%3d\n", *pCounter - 1, *pCounter);
	}
	return 0;
}

int Input(int Val)
{
	int Num1 = 0, Num2 = 0;
	int counter = 0,flag=0;
	int* pNum1 = &Num1, * pNum2 = &Num2;

	int* pa = NULL;       //建立中间指针以便切换变量
	int ans = 0;
	char c;

	pa = pNum1;
	printf("User: ");

	//用getchar()去get合法的字符
	while (1)
	{
		c = getchar();

		//合法字符
		if (c >= '0' && c <= '9')
		{
			ans = c - '0';
			*pa = (*pa) * 10 + ans;
			flag = 1;
			continue;
		}

		//检测到分隔符（此处为,）则将下一个变量的指针赋给中间指针，同时计数器+1
		else if (c == ',')
		{
			counter++;

			//若没输第一个数，或者输多了返回错误码-1
			if (counter != 1||flag!=1)
			{
				counter = -1;
				while (getchar() != '\n');
				break;
			}
			else
			{
				pa = pNum2;
				flag = 0;
				continue;
			}
		}

		//检测到回车则结束
		else if (c == '\n')
		{
			counter++;
			//两个数没输完，返回错误码-2
			if ((counter != 2 && counter != 1)||flag!=1)
			{
				counter = -2;
				break;
			}

		}
		else        //此处为非法字符的处理，返回错误码-3
		{
			counter = -3;
			while (getchar() !='\n');
			break;
		}

		//用户没报对数的处理
		if (Val - Num1 == -1 && ((Num1 - Num2) == -1 || (Num2 == 0)))
		{
			break;
		}
		else {
			counter = -4;
			break;
		}

	}
	return counter;
}
